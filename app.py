from flask import Flask, request, jsonify, render_template
import pandas as pd
import joblib
import numpy as np

app = Flask(__name__)

# Load the trained pipeline
pipeline = joblib.load('pipeline.pkl')

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/predict', methods=['POST'])
def predict():
    try:
        json_data = request.get_json()
        df = pd.DataFrame(json_data)

        # Ensure all column names are strings
        df.columns = df.columns.astype(str)

        # Define the expected column names based on the training data
        expected_columns = [str(i) for i in range(41)]

        # Ensure the input data has all expected columns, adding missing ones with default values
        for col in expected_columns:
            if col not in df.columns:
                df[col] = 0

        # Keep only the expected columns
        df = df[expected_columns]

        # Define categorical and numeric columns
        categorical_columns = ['1', '2', '3']
        numeric_columns = [col for col in df.columns if col not in categorical_columns]

        # Convert categorical columns to string type and fill NaNs with a placeholder
        df[categorical_columns] = df[categorical_columns].astype(str).fillna('missing')

        # Convert numeric columns to numeric type and fill NaNs with 0
        df[numeric_columns] = df[numeric_columns].apply(pd.to_numeric, errors='coerce').fillna(0)

        # Inspect the preprocessor step in the pipeline
        preprocessor = pipeline.named_steps['preprocessor']
        onehot = preprocessor.named_transformers_['cat']

        # Ensure input matches the categories in the encoder
        for i, col in enumerate(categorical_columns):
            df[col] = df[col].apply(lambda x: x if x in onehot.categories_[i] else 'missing')

        # Check if 'missing' is a known category in each categorical column
        for i, col in enumerate(categorical_columns):
            if 'missing' not in onehot.categories_[i]:
                onehot.categories_[i] = np.append(onehot.categories_[i], 'missing')

        # Process the data through the preprocessor
        preprocessed_data = preprocessor.transform(df)

        # Predict using the classifier step
        predictions = pipeline.named_steps['model'].predict(preprocessed_data)

        return jsonify({'prediction': predictions.tolist()})
    except Exception as e:
        return jsonify({'error': str(e)})

if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0')

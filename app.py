from flask import Flask, request, jsonify, render_template
import pandas as pd
import joblib

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

        # Define categorical and numeric columns
        categorical_columns = ['1', '2', '3']
        numeric_columns = [col for col in df.columns if col not in categorical_columns]

        # Convert categorical columns to string type
        df[categorical_columns] = df[categorical_columns].astype(str)
        df[numeric_columns] = df[numeric_columns].apply(pd.to_numeric)

        # Preprocess data using the loaded pipeline
        preprocessed_data = pipeline.named_steps['preprocessor'].transform(df)

        # Predict using the classifier step
        predictions = pipeline.named_steps['model'].predict(preprocessed_data)

        return jsonify({'prediction': predictions.tolist()})
    except Exception as e:
        return jsonify({'error': str(e)})

if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0')

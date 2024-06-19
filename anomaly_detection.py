import pandas as pd
import joblib

# Load the trained pipeline
pipeline = joblib.load('pipeline.pkl')

def detect_anomalies(data):
    try:
        df = pd.DataFrame(data)

        # Preprocess data
        categorical_columns = ['column2', 'column3']  # Update with actual categorical columns
        numeric_columns = ['column1']  # Update with actual numeric columns

        df[categorical_columns] = df[categorical_columns].astype(str)
        df[numeric_columns] = pd.to_numeric(df[numeric_columns])

        preprocessed_data = pipeline.named_steps['preprocessor'].transform(df)
        predictions = pipeline.named_steps['classifier'].predict(preprocessed_data)

        return predictions
    except Exception as e:
        raise ValueError(f"Error during preprocessing or prediction: {e}")

# Example usage
if __name__ == '__main__':
    sample_data = [{'column1': 0, 'column2': '0', 'column3': '0'}]  # Update with actual sample data
    try:
        result = detect_anomalies(sample_data)
        print("Predictions:", result)
    except ValueError as e:
        print(e)


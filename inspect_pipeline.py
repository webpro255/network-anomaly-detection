import joblib
import pandas as pd
import numpy as np

# Load the trained pipeline
try:
    pipeline = joblib.load('pipeline.pkl')
    print("Pipeline loaded successfully.")
except Exception as e:
    print(f"Error loading pipeline: {e}")

# Sample data (the same as used in your curl request)
data = [{'0': 0, '1': '0', '2': '0', '3': '0', '4': 0, '5': 0, '6': 0, '7': 0, '8': 0, '9': 0,
         '10': 0, '11': 0, '12': 0, '13': 0, '14': 0, '15': 0, '16': 0, '17': 0, '18': 0,
         '19': 0, '20': 0, '21': 0, '22': 0, '23': 0, '24': 0, '25': 0, '26': 0, '27': 0,
         '28': 0, '29': 0, '30': 0, '31': 0, '32': 0, '33': 0, '34': 0, '35': 0, '36': 0,
         '37': 0, '38': 0, '39': 0, '40': 0}]

# Convert data to DataFrame
df = pd.DataFrame(data)
print(f"DataFrame created: {df}")
print(f"DataFrame dtypes before conversion: {df.dtypes}")

# Define categorical and numeric columns
categorical_columns = ['1', '2', '3']
numeric_columns = [col for col in df.columns if col not in categorical_columns]

# Convert categorical columns to string
df[categorical_columns] = df[categorical_columns].astype(str)
print(f"Categorical columns converted to string:\n{df[categorical_columns].dtypes}")

# Convert numeric columns to numeric type (int)
df[numeric_columns] = df[numeric_columns].apply(pd.to_numeric)
print(f"Numeric columns converted to numeric:\n{df[numeric_columns].dtypes}")

# Check for NaN values
if df.isnull().values.any():
    print(f"DataFrame contains NaN values:\n{df[df.isnull().any(axis=1)]}")
    raise ValueError("Input data contains NaN values after conversion")

# Reset column names to be consistent with the pipeline's expectations
df.columns = df.columns.astype(str)
print(f"DataFrame with reset column names:\n{df.head()}")

# Convert DataFrame to numpy array
array_data = df.to_numpy()
print(f"Numpy array data:\n{array_data}")
print(f"Numpy array dtypes: {array_data.dtype}")

# Inspect the preprocessor step in the pipeline
preprocessor = pipeline.named_steps['preprocessor']
print(f"Preprocessor steps: {preprocessor}")

# Handle OneHotEncoder categories
onehot = preprocessor.named_transformers_['cat']
print(f"OneHotEncoder categories: {onehot.categories_}")

# Ensure input matches the categories in the encoder
for i, col in enumerate(categorical_columns):
    if df[col].values[0] not in onehot.categories_[i]:
        df[col] = onehot.categories_[i][0]  # Replace with a known category

# Process the data through the preprocessor
try:
    preprocessed_data = preprocessor.transform(df)
    print(f"Preprocessed data:\n{preprocessed_data}")
except Exception as e:
    print(f"Error in preprocessor: {e}")

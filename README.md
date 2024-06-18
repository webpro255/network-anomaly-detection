
# Network Anomaly Detection
![Python version](https://img.shields.io/badge/python-3.10+-blue)
![GitHub Actions](https://github.com/webpro255/network-anomaly-detection/actions/workflows/python-app.yml/badge.svg)
![GitHub last commit](https://img.shields.io/github/last-commit/webpro255/network-anomaly-detection)
![GitHub issues](https://img.shields.io/github/issues/webpro255/network-anomaly-detection)
![GitHub](https://img.shields.io/github/license/webpro255/network-anomaly-detection)
![GitHub contributors](https://img.shields.io/github/contributors/webpro255/network-anomaly-detection)

## Overview

Network Anomaly Detection is a powerful tool designed to detect and respond to anomalous activities in network traffic. This tool leverages machine learning algorithms to identify potential threats and provide actionable insights for enhancing network security.

## Features

- **Real-time anomaly detection**: Monitors network traffic in real-time to identify unusual patterns.
- **Machine Learning Integration**: Utilizes advanced machine learning models for accurate anomaly detection.
- **Scalability**: Can be deployed on a variety of network sizes, from small offices to large enterprises.
- **User-Friendly Interface**: Easy to set up and use with a comprehensive dashboard for monitoring.

## Prerequisites

- **Python 3.10+**
- **TensorFlow**
- **Scikit-learn**
- **Pandas**
- **Numpy**
- **Git LFS** (for handling large files)

## Installation

### Clone the Repository

```bash
git clone https://github.com/webpro255/network-anomaly-detection.git
cd network-anomaly-detection
```
### Set Up Git LFS

**Ensure Git LFS is installed and initialized**:
```bash
git lfs install
git lfs track "*.so"
git lfs track "*.data_10_percent"
git add .gitattributes
git commit -m "Add Git LFS tracking"
git push origin main
```
### Install Dependencies

**Create a virtual environment and install the required packages**:
```bash
python3 -m venv venv
source venv/bin/activate
pip install -r requirements.txt
```
### Files in the Repository

 - **app.py**: Main application script for running the web interface.
 - **anomaly_detection.py**: Script containing the anomaly detection logic.
 - **inspect_pipeline.py**: Script for inspecting the machine learning pipeline.
 - **pipeline.pkl**: Serialized machine learning pipeline.
 - **kddcup.data_10_percent**: Sample dataset used for training and testing.
 - **templates**: Directory containing HTML templates for the web interface.

## Usage Training the Model

**Train the anomaly detection model using the provided dataset**:
```bash
python anomaly_detection.py --train --data kddcup.data_10_percent
```
### Inspecting the Pipeline

**Inspect the trained machine learning pipeline**:
```bash
python inspect_pipeline.py
```
### Running the Detection

**Start the anomaly detection service**:
```bash
python app.py
```

### Monitoring
Access the monitoring dashboard at `http://localhost:5000` to visualize the network traffic and detected anomalies.
### Contributing
We welcome contributions! Please read our Contributing Guide to get started.
### License
This project is licensed under the MIT License - see the LICENSE file for details.
Acknowledgements

Special thanks to all contributors and the open-source community for their support and collaboration.

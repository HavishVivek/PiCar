from flask import Flask, Response
import cv2
import numpy as np

app = Flask(__name__)

# Function to detect white color
def detect_white(frame):
    # Convert the frame to HSV color space
    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    
    # Define the range for white color in HSV
    lower_white = np.array([0, 0, 200])  # Lower bound for white
    upper_white = np.array([180, 25, 255])  # Upper bound for white

    # Create a mask for white color
    mask = cv2.inRange(hsv, lower_white, upper_white)
    
    # Find contours in the mask
    contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
    
    # Draw contours on the original frame for visualization
    cv2.drawContours(frame, contours, -1, (0, 255, 0), 2)
    
    return len(contours) > 0, frame

# Function to generate video stream
def generate_video():
    cap = cv2.VideoCapture(0)  # Open the webcam (change to appropriate index if needed)
    if not cap.isOpened():
        print("Cannot open camera")
        exit()

    while True:
        ret, frame = cap.read()  # Capture frame-by-frame
        if not ret:
            print("Can't receive frame (stream end?). Exiting ...")
            break

        wall_detected, processed_frame = detect_white(frame)

        text = "White Detected" if wall_detected else "No White"
        cv2.putText(processed_frame, text, (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 255), 2)

        ret, buffer = cv2.imencode('.jpg', processed_frame)
        frame = buffer.tobytes()

        yield (b'--frame\r\n'
               b'Content-Type: image/jpeg\r\n\r\n' + frame + b'\r\n')

    cap.release()

@app.route('/stream')
def video_feed():
    return Response(generate_video(),
                    mimetype='multipart/x-mixed-replace; boundary=frame')

if __name__ == '__main__':
    # Run Flask server on port 8080
    app.run(host='0.0.0.0', port=8080)
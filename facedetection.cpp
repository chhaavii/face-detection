#include <opencv2/opencv.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // Load the Haar Cascade for face detection
    CascadeClassifier faceCascade;
    if (!faceCascade.load("haarcascade_frontalface_default.xml")) {
        cout << "Error loading face cascade file. Make sure the path is correct." << endl;
        return -1;
    }

    // Open the default video camera
    VideoCapture cap(0);
    if (!cap.isOpened()) {
        cout << "Error opening video stream or file" << endl;
        return -1;
    }

    // Loop to capture frames from the camera
    while (true) {
        Mat frame;
        cap >> frame;

        // Check if frame is empty
        if (frame.empty()) {
            cout << "No frame captured from camera." << endl;
            break;
        }

        // Convert to grayscale for face detection
        Mat gray;
        cvtColor(frame, gray, COLOR_BGR2GRAY);
        equalizeHist(gray, gray);

        // Detect faces
        vector<Rect> faces;
        faceCascade.detectMultiScale(gray, faces);

        // Draw rectangles around faces
        for (size_t i = 0; i < faces.size(); i++) {
            rectangle(frame, faces[i], Scalar(255, 0, 0), 2);
        }

        // Show the output frame
        imshow("Face Detection", frame);

        // Exit if the user presses 'q'
        char c = (char)waitKey(10);
        if (c == 'q' || c == 27) {
            break;
        }
    }

    // Release the camera or video capture object
    cap.release();
    destroyAllWindows();
    return 0;
}

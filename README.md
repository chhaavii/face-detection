
# Face Detection App

This Face Detection App is a simple, real-time face detection application built using C++ and OpenCV. It utilizes a pre-trained Haar Cascade classifier to detect faces through a webcam feed and draws rectangles around them on the video output.

## Features

- **Real-time face detection**: Detects faces using a webcam and OpenCV.
- **Easy-to-read code**: The project is structured simply for easy understanding and modification.
- **Visual feedback**: Draws rectangles around detected faces in the live video stream.

## Prerequisites

Before you begin, ensure you have the following installed on your machine:

1. **OpenCV**: Install OpenCV using the [OpenCV installation guide](https://docs.opencv.org/master/d7/d9f/tutorial_linux_install.html).
2. **C++ Compiler**: A C++ compiler with support for C++11 or higher, such as `g++` for Linux or MinGW for Windows.

### Required Files

Download the Haar Cascade XML file used for face detection:
- [haarcascade_frontalface_default.xml](https://github.com/opencv/opencv/blob/master/data/haarcascades/haarcascade_frontalface_default.xml)

Place this file in the project directory or specify its path in the code.

## Installation

1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com/your-username/face-detection-app.git
   cd face-detection-app
   ```

2. Compile the program:
   ```bash
   g++ face_detection.cpp -o face_detection `pkg-config --cflags --libs opencv4`
   ```

3. Run the application:
   ```bash
   ./face_detection
   ```

## Usage

1. When you launch the app, your default webcam will start capturing video.
2. The app will detect faces in real-time, displaying rectangles around detected faces.
3. Press `q` or `Esc` to exit the application.

## Code Overview

- **Video Capture**: Captures frames from the default webcam using `VideoCapture`.
- **Face Detection**: Uses OpenCV’s `CascadeClassifier` with a pre-trained Haar Cascade model to detect faces.
- **Visualization**: Draws a rectangle around detected faces and displays the modified video feed.

## Dependencies

The Face Detection App is built using OpenCV. If you haven't installed OpenCV, you can do so with the following command (for Ubuntu):

```bash
sudo apt-get update
sudo apt-get install libopencv-dev
```

## Troubleshooting

- **Cascade File Not Found**: Ensure `haarcascade_frontalface_default.xml` is located in the same directory as the executable or specify its full path in the code.
- **Webcam Issues**: Make sure your webcam is properly connected and recognized by your operating system.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.

## Acknowledgements

- [OpenCV](https://opencv.org/) for the computer vision library.
- Haar Cascade models from the [OpenCV GitHub repository](https://github.com/opencv/opencv/tree/master/data/haarcascades) for face detection.

---

Enjoy using the Face Detection App, and feel free to modify and extend it as needed!
```

### Notes:
- Update the **repository URL** in the `git clone` command to your actual repository URL.
- The `LICENSE` section assumes you're using the MIT License; adjust this if you choose a different license.

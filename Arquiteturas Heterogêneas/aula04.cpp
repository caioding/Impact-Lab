#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ofstream image_Input;
    image_Input.open("./images/image.ppm");

    if (!image_Input.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1; // Return an error code
    }

    image_Input << "P3" << endl;          // P3 means this is a RGB color image in ASCII
    image_Input << "3 2" << endl;     // 100 100 is the width and height of the image in pixels
    image_Input << "255" << endl;    // 255 is the maximum value for each color

    // image_Input << "255 0 0 ";		// Red
    // image_Input << "0 255 0 ";	//Green
    // image_Input << "0 0 255" << endl;		//Blue
    // image_Input << "255 255 0 ";	//yellow
    // image_Input << "255 255 255 "; //white
    // image_Input << "0 0 0" << endl;		//black

    // 50% red and 50% blue with loop for
for (int ImgH = 0; ImgH < 2; ImgH++) {
        for (int ImgV = 0; ImgV < 3; ImgV++) {
            int pixel_count = ImgH * 3 + ImgV;

            if (pixel_count < 3) { 
                image_Input << "255 0 0 "; // Red
            } else {
                image_Input << "0 0 255 "; // Blue
            }
        }
        image_Input << endl;
    }

    image_Input.close();

    return 0;
}

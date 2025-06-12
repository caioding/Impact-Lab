#include<iostream>
#include<fstream> // Read and Write Images

using namespace std;

int main() {

	// Create images

	//std::ofstream image;
	ofstream image;

	image.open("./images/image.ppm");

	if (image.is_open()) {

		// The part above is the header
		// P3  # "P3" means this is a RGB color image in ASCII
		// 3 2          # "3 2" is the width and height of the image in pixels
		// 255          # "255" is the maximum value for each color

		// Header
		image << "P3" << endl;
		image << "100 100" << endl;
		image << "255" << endl;

		// Image Body  -  Size 100 x 100

		/* # The part below is the image data : RGB triplet */
	/*
		image << "255 0 0" << endl;		// Red
		image << "0 255  0" << endl;	//Green
		image << "0 0 255" << endl;		//Blue
		image << "255 255 0" << endl;	//yellow
		image << "255 255 255" << endl; //white
		image << "0 0 0" << endl;		//black
		*/

		for (int ImgH = 0; ImgH < 100; ImgH++) {
			for(int ImhV = 0; ImhV < 100; ImhV++) {
				image << "255 0 100" << endl;		// Red
			}
			
		}
	}


	image.close();

}


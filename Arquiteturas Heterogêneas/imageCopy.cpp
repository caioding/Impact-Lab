#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream image_Write;
    ifstream image_Read;

    image_Read.open("./images/bclc.ppm");
    image_Write.open("./images/output/bclcCopy.ppm");

    string Type;
    string Width;
    string Height;
    string MaxColorValue;
    string pixelR, pixelG, pixelB;

    if (image_Read.is_open()) {

        image_Read >> Type;
        image_Read >> Width;
        image_Read >> Height;
        image_Read >> MaxColorValue;
        
        image_Write << Type << endl;
        image_Write << Width << " " << Height << endl;
        image_Write << MaxColorValue << endl;

        // Read and write pixel data with for loop
        for (int ImgH = 0; ImgH < stoi(Height); ImgH++) {
            for (int ImgV = 0; ImgV < stoi(Width); ImgV++) {
                image_Read >> pixelR >> pixelG >> pixelB;
                image_Write << pixelR << " " << pixelG << " " << pixelB << " ";
            }
            image_Write << endl;
        }
    }

    image_Write.close();
    image_Read.close();

    return 0;
}
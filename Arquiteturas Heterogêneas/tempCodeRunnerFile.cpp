// Modulo_01_Aula_04-01.cpp

#include <fstream> // Read and Write Images
#include <iostream> // Standard Input and Output

#include <chrono> // Timer

#include <string> // String Manipulation

using namespace std;
using namespace std::chrono; // Timer

int main() { // Thread

// Read Image
	ifstream Image_Read;
	Image_Read.open("images/bclc.ppm");
    
  
// Write Image
	ofstream Image_write;
	Image_write.open("images/output/filter.ppm");

	// Copy Memory
	//Image_Read >> memory>> Image_Write

	//Image Header
	// Type = P3 ou P6
	string type = "", width = "", height = "", RGBMax = "";

	//int width = 0, height = 0, RGBMax = 0, red, g, b;
   
	// Copy Memory
	//Image_Read >> memory
	Image_Read >> type;
	Image_Read >> width;
	Image_Read >> height;
	Image_Read >> RGBMax;

	// Copy Memory to new Image
	//memory>> Image_Write
	Image_write << type << endl;
	Image_write << width << " " << height << endl;
	Image_write << RGBMax << endl;


	// Image Body
	string red = "", green = "", blue = "";

    std::cout << "Reading Image: " << type << " " << width << " " << height << " " << RGBMax << endl;

    std::cout << "Starting to read pixel data..." << endl;
    
    // Start Timer
    auto start = high_resolution_clock::now(); // Start Timer
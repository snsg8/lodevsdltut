#include <cmath>
#include <string>
#include <vector>
#include <iostream>

#include "quickcg.h"
using namespace QuickCG;

//place the example code below here:

int main(int argc, char *argv[]) 
{
	screen(256, 256, 0, "Small Test Script");
	
	for(int x = 0; x < w; x++)
		for(int y = 0; y < h; y++)
		{
			pset(x, y, ColorRGB(x, y, 128));
		}
		print("Hello, world!", 8, 8);

		std::string test;
		test.resize(20);

	redraw(); 
	sleep();
		
	cls(ColorRGB(255,255,255));
	
	drawDisk(128, 128, 100, ColorRGB(255, 128, 200)); 
	drawDisk(88, 100, 10, ColorRGB(0, 0, 255)); 
	drawDisk(168, 100, 10, ColorRGB(0, 0, 255)); 
	drawLine(88, 150, 168, 150, ColorRGB(255, 0, 0)); 
	redraw(); 

	sleep(); 

	
	
	return 0;

}
// file2.cpp -- contains functions called in file1.cpp
#include <iostream>
#include <cmath>
#include "coordin.h"

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
	polar answer;

	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}

// show polar coordinates, converting angle to degrees
void show_polar(polar dapos)
{
	const double Rad_to_deg = 57.29577951;

	std::cout << "distance = " << dapos.distance;
	std::cout << ", angle = " << dapos.angle * Rad_to_deg;
	std::cout << " degrees\n";
}

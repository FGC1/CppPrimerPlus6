// twofile2.cpp -- variables with internal and external linkage
#include <iostream>

extern int tom;
static int dick = 10;
int harry = 200;

void remote_access()
{
	std::cout << "remote_access() reports the following addresses:\n";
	std::cout << &tom << " = &tom, " << &dick << " = &dick, ";
	std::cout << &harry << " = &harry\n";
}

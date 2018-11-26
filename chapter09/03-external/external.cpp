// external.cpp -- external variables
// compile with support.cpp
#include <iostream>

double warming = 0.3;

void update(double dt);
void local();

int main()
{
	std::cout << "Global warming is " << warming << " degrees.\n";
	update(0.1);
	std::cout << "Global warming is " << warming << " degrees.\n";
	local();
	std::cout << "Global warming is " << warming << " degrees.\n";
	return 0;
}

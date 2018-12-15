// sayings1.cpp -- using expanded MyString class
#include <iostream>
#include "mystring.h"

const int ArSize = 10;
const int MaxLen = 81;
int main()
{
	MyString name;
	std::cout << "Hi, what's your name?\n";
	std::cin >> name;

	std::cout << name << ", please enter up to " << ArSize;
	std::cout << " short sayings<empty line to quit>:\n";
	MyString sayings[ArSize];	// array of objects
	char temp[MaxLen];	// tempory string storage
	int i;
	for (i = 0; i < ArSize; i++)
	{
		std::cout << i + 1 << ": ";
		std::cin.get(temp, MaxLen);
		while (std::cin && std::cin.get() != '\n')
			;
		if (!std::cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}
	int total = i;
	if (total > 0)
	{
		std::cout << "here are your sayings:\n";
		for (i = 0; i < total; i++)
		{
			std::cout << sayings[i][0] << ": " << sayings[i] << std::endl;
		}
		int shortest = 0;
		int first = 0;
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		std::cout << "Shortest saying:\n" << sayings[shortest] << std::endl;
		std::cout << "First alphabetically:\n" << sayings[first] << std::endl;
	}
	else
		std::cout << "No input! Bye.\n";
	return 0;
}

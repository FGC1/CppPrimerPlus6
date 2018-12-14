// stringbad.cpp -- StringBad class methods
#include <cstring>	// string.h for some
#include "stringbad.h"

// initializing static class member
int StringBad::num_strings = 0;

// class methods
// construct StringBad from C string
StringBad::StringBad(const char*s)
{
	len = std::strlen(s);		// set size
	str = new char[len + 1];	// allocate storage
	std::strcpy(str, s);		// initialize pointer
	num_strings++;				// set object count
	std::cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");	// default string
	num_strings++;
	std::cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::~StringBad()
{
	std::cout << "\"" << str << "\" object deleted, ";
	--num_strings;
	std::cout << num_strings << " left\n";
	delete[] str;
}

std::ostream& operator<<(std::ostream &os, const StringBad &st)
{
	os << st.str;
	return os;
}

#include "mystring.h"

MyString::MyString()
{
	this->len = 0;
	this->str = new char[1];
	this->str[0] = 0;
}

MyString::MyString(const char* szStr)
{
	this->len = strlen(szStr);
	this->str = new char[len + 1];
	strcpy(this->str, szStr);
}

MyString::MyString(const MyString &myString)
{
	this->len = myString.len;
	this->str = new char[len + 1];
	strcpy(this->str, myString.str);
}

MyString::~MyString()
{
	delete[] this->str;
}

MyString& MyString::operator=(const MyString &myString)
{
	if (this == &myString)
	{
		return *this;
	}
	delete[] this->str;
	this->len = myString.len;
	this->str = new char[len + 1];
	strcpy(this->str, myString.str);
	return *this;
}

MyString& MyString::operator=(const char* szBuf)
{
	delete[]this->str;
	this->len = strlen(szBuf);
	this->str = new char[len + 1];
	strcpy(this->str, szBuf);
	return *this;
}

char& MyString::operator[](int i)
{
	return this->str[i];
}

const char& MyString::operator[](int i) const
{
	return this->str[i];
}

bool operator<(const MyString& myString1, const MyString& myString2)
{
	return strcmp(myString1.str, myString2.str) < 0;
}

bool operator>(const MyString& myString1, const MyString& myString2)
{
	return myString2 < myString1;
}

bool operator==(const MyString& myString1, const MyString& myString2)
{
	return strcmp(myString1.str, myString2.str) == 0;
}

std::istream& operator>>(std::istream& is, MyString &str)
{
	char szBuf[MyString::CINLIM];
	is.get(szBuf, MyString::CINLIM);
	if (is)
	{
		str = szBuf;
	}
	while (is && is.get() != '\n')
	{
		continue;
	}
	return is;
}

std::ostream& operator<<(std::ostream& os, const MyString &str)
{
	os << str.str;
	return os;
}

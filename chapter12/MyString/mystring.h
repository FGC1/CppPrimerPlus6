#ifndef MYSTRING_H_
#define MYSTRING_H_

#include <iostream>
#include <string.h>

class MyString
{
private:
	int len;	// 字符串长度
	char *str;	// 字符串指针
	static const int CINLIM = 80;
public:
	MyString();
	MyString(const char* szStr);
	MyString(const MyString &myString);
	~MyString();

	// overload operator methods
	MyString& operator=(const MyString &myString);
	MyString& operator=(const char* szBuf);
	char& operator[](int i);
	const char& operator[](int i) const;
	int length() const {return this->len;}

	// overload operator friends
	friend bool operator<(const MyString &myString1, const MyString &myString2);
	friend bool operator>(const MyString &myString1, const MyString &myString2);
	friend bool operator==(const MyString &myString1, const MyString &myString2);
	friend std::istream& operator>>(std::istream &is, MyString &str);
	friend std::ostream& operator<<(std::ostream &os, const MyString &str);
};

#endif // MYSTRING_H_

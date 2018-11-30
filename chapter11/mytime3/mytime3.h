// mytime3.h -- Time class before operator overloading
#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>

class Time
{
private:
	int hours;
	int minutes;

public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHour(int h);
	void Reset(int h = 0, int m = 0);
	Time Sum(const Time& t) const;
	Time operator+(const Time& t) const;
	Time operator-(const Time& t) const;
	Time operator*(double n) const;
	friend Time operator*(double n, const Time& t){ return t * n;}
	friend std::ostream& operator<<(std::ostream& os, const Time& t);
	void Show() const;
};

#endif // MYTIME3_H_

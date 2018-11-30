// mytime3.cpp -- implementing Time methods
#include <iostream>
#include "mytime3.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHour(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::Sum(const Time& t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator+(const Time& t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

Time Time::operator-(const Time& t) const
{
	Time diff;
	int tot1, tot2;
	tot1 = minutes + 60 * hours;
	tot2 = t.minutes + 60 * t.hours;
	diff.minutes = (tot1 - tot2) % 60;
	diff.hours = (tot1 - tot2) / 60;
	return diff;
}

Time Time::operator*(double n) const
{
	Time result;
	long tot = minutes * n + 60 * hours * n;
	result.minutes = tot % 60;
	result.hours = tot / 60;
	return result;
}

std::ostream& operator<<(std::ostream&os, const Time& t)
{
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}

void Time::Show() const
{
	std::cout << hours << " hours, " << minutes << " minutes";
}

// usetime3.cpp -- using the first draft of the Time class
// compile usetime3.cpp and mytime2.cpp together
#include <iostream>
#include "mytime3.h"

int main()
{
	using std::cout;
	using std::endl;

	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;

	cout << "weeding time = ";
	weeding.Show();
	cout << endl;

	cout << "waxing time = ";
	waxing.Show();
	cout << endl;

	cout << "total work time = ";
	total = weeding + waxing;
	total.Show();
	cout << endl;

	cout << "weeding time - waxing time = ";
	diff = weeding - waxing;
	diff.Show();
	cout << endl;

	adjusted = total * 1.5;
	cout << "adjusted work time = ";
	adjusted.Show();
	cout << endl;

	adjusted = 1.5 * total;
	cout << "1.5 * total = ";
	cout << adjusted << endl;
	
	return 0;
}


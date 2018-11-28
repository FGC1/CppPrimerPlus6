// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype>	// or ctype.h
#include "stack.h"

int main()
{
	using namespace std;
	Stack st;	// create an empty stack
	char ch;
	Item po;
	cout << "Please enter A to add a purchase order,\n";
	cout << "P to process a P0, or Q to quit.\n";

	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << "\a";
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':
			cout << "Enter a P0 number to add: ";
			cin >> po;
			if (st.isfull())
			{
				cout << "stack already full\n";
			}
			else
			{
				st.push(po);
			}
			break;
		case 'P':
		case 'p':
			if (st.isempty())
			{
				cout << "stack already empty\n";
			}
			else
			{
				st.pop(po);
				cout << "P0 #" << po << " popped\n";
			}
			break;
		}
		cout << "Please enter A to add a purchase order,\n";
		cout << "P to process a P0, or Q to quit.\n";
	}
	cout << "Bye.\n";
	return 0;
}

// stock01.cpp -- implementing the Stock class
// version 01
#include <iostream>
#include "stock01.h"

Stock::Stock()
{
	std::cout << "Default constructor called\n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
	std::cout << "Constructor using " << co << " called\n";
	company = co;

	if (n < 0)
	{
		std::cout << "Number of shares can't be negative; "
				  << company << " shares set to 0.\n";
		shares = 0;
	}
	else
	{
		shares = n;
	}
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	std::cout << "Bye, " << company << "!\n";
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased can't be negative. "
				  << "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative. "
			 << "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have! "
			 << "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout << "Company: " << company;
	std::cout << " Shares: " << shares << "\n";
	std::streamsize prec = std::cout.precision(3);
	std::cout << " Share Price: $" << share_val;
	std::cout.precision(2);
	std::cout << " Total Worth: $" << total_val << "\n";
	std::cout.precision(prec);
	std::cout.setf(orig, std::ios_base::floatfield);
}

#include <iostream>

class A
{
private:
	int a;
	int b;
public:
	virtual void f(){}
};

class B:public A
{
};

int main()
{
	std::cout << sizeof (A) << std::endl;
	std::cout << sizeof (B) << std::endl;
	return 0;
}

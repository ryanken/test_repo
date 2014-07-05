#include <iostream>

using namespace std;

int addition(int x, double y);

int main()
{
	int foo;
	double bar;
	int foobar;

	foo = 3;
	bar = 7.2;

	foobar = addition(foo, bar);

	cout << foobar << endl;

	return 0;
}

int addition(int x, double y)
{
	return x + y;
}
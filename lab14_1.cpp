#include <iostream>
#include <string>
using namespace std;


int main()
{
	int a = 5;
	string b = "A";
	string &c = b;
	int *x = &a;
	string *y = &b;
	int **z = &x;
	cout << a << "\n" << b << "\n" << c << "\n" << x << "\n" << y << "\n" << z << "\n\n";
	cout << &a << "\n" << &b << "\n" << &c << "\n" << &x << "\n" << &y << "\n" << &z << "\n\n";
	c = "F";
	cout << a << "\n" << b << "\n" << c << "\n" << x << "\n" << y << "\n" << z << "\n\n";
	*y = "W";
	cout << a << "\n" << b << "\n" << c << "\n" << x << "\n" << y << "\n" << z << "\n\n";
	*x = 6;
	cout << a << "\n" << b << "\n" << c << "\n" << x << "\n" << y << "\n" << z << "\n\n";
	**z = 7;
	cout << a << "\n" << b << "\n" << c << "\n" << x << "\n" << y << "\n" << z << "\n\n";  

	return 0;
}
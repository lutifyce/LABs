#include <iostream>
using namespace std;
void main()
{
	float x, y;
	char z;
	cout << "type nubmer 1";
	cin >> x;
	cout << "type number an operation";
	cin >> z;
	cout << "type nubmer 2";
	cin >> y;
	if (z == '+')
		cout << x << "+" << y << x + y
	else if (z == '-')
		cout << x << "-" << y << x - y
	else cout << "I will not do this";
	cin.get();
}

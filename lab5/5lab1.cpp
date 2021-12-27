#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, c, f, t, h;
	const double PI = 3.141592653589793;
	double e = exp(1.0);
	cout << "enter number 1:";
	cin >> a;
	cout << "enter nubmer 2:";
	cin >> c;
	t = a * (PI / 180);
	f = t * 2;
	h = c * (PI / 180);
	cout << "the result is:" << endl;
	cout << (sqrt(pow(a, 2) + (3 * c)) - a) / (2 * c) << endl;
	cout << sqrt((3 + a * c) / (4 * pow(a, 2))) << endl;
	cout << (6 - fabs(a - 3 * c)) / (sqrt(5 - pow(c, 2))) << endl;
	cout << pow(e, a + 7) * sqrt(37 * c - pow(a, 3)) << endl;
	cout << sin(t) + (pow(c, 2)) / (cos(f) + 23) << endl;
	cout << tan(h) - fabs(a - (c * 3) + 2 / (sqrt(c + 4))) << endl;
	cout << "press enter to exit";
	cin.get();


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c, p;
	cout << "type a,b and c:";
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	cout << "S=" << sqrt(p * (p - a) * (p - b) * (p - c));
}

#include <iostream>
using namespace std;
int main()
{
	char  toxic[6];
	char f, i, s;
	cin >> toxic;
	i = toxic[0];
	toxic[0] = toxic[4];
	toxic[4] = toxic[2];
	toxic[2] = i;
	cout << "the result is:" << toxic;
	cin.get();

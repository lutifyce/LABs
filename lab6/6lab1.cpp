
#include <iostream>
using namespace std;

int main()
{
	int code, codeo, codei;
	char ch, cf, cd;
	cout << "type characters and press Enter:";
	cin >> ch;
	code = (int)ch;
	codeo = code - 1;
	codei = code + 1;
	cf = (char)codei;
	cd = (char)codeo;
	if (code >= 65 and code <= 90)
	{
		cout << "the previous character is:" << cd << endl;
		cout << "ASCII code is:" << code << endl;
		cout << "the next character is:" << cf << endl;
	}
	else
	{
		cout << "i cant";
	}
	cin.get();

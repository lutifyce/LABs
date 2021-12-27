#include <iostream>
using namespace std;
void main()
{
	char st[6];
	char ch;
	cout « "type characters and press Enter:";
	cin » st;
	ch = st[0];
	st[0] = st[4];
	cin.get();
	st[4] = ch;
	cout « "the result is:" « st;
	cin.get();

}

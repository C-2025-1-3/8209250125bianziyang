#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
		cout << (char)(ch - 32) << endl;
	else cout << (int)(ch + 1) << endl;
	return 0;
}
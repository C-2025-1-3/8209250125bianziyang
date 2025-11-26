#include<iostream>
using namespace std;
int min(int x, int y)
{
	int z;
	z = (x > y) ? x : y;
	return z;
}
int main()
{
	int a, b,i=1,j=1,k=1;
	cout << "请输入两个正整数，然后我会求出它们的最大公约数与最小公倍数" << endl;
	cin >> a >> b;
	if (a <= 0 || b <= 0)
		cout << "???输入正整数！";
	else 
	{
		if (i <= min(a, b))
		{
			while (i < min(a, b))
			{
				if (a % i == 0 && b % i == 0)
					j = i;
				++i;
			}
			cout << "它们的最大公约数是：" << j;
		}
		else cout << "它们的最大公约数是：" << j << endl;
		k = (a * b) / j;
		cout << "它们的最小公倍数是" << k;
	}
	return 0;
}
//判断终止：i<min
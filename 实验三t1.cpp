#include<iostream>
using namespace std;

inline int min(int a, int b)
{
	return (a < b) ? a : b;
}

inline int max(int a, int b)
{
	return (a > b) ? a : b;
}

int highest(int m, int n)
{
	int hcm = 0;
	for (int i = 1; i <= min(m,n); i++)
	{
		if (m % i == 0 && n % i == 0)
			hcm = i;
	}
	return hcm;
}

inline int least(int m, int n)
{
	const int max_lcm = m * n;
	int lcm;
	for (int i = max(m,n); i <= max_lcm; i++)
	{
		if (i % m == 0 && i % n == 0)
			lcm = i;
	}
}

int main()
{
	for(;;)
	{ 
		int n, m;
		cout << "请输入两个数，我会计算出它们的最大公约数和最小公倍数： ";
		cin >> n >> m;
		cout << "它们的最大公约数是： " << highest(n, m) << '\n' << "它们的最小公倍数为： " << least(n, m) << endl;

	}
}


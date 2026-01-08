/*
声明一个函数，判断一个整数是否为素数，使用如下函数头：
bool is_prime(int num) ,如果num是素数函数返回true，否则返回false；
利用函数is_prime找出前200个素数，并按每行10个输出：
*/
#include<iostream>
using namespace std;

bool is_prime(int num)
{
	int i;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			break;
	}
	return i>=num?true:false;
}

int main()
{
	const int max = 200;
	int sum = 0;
	for (int i = 2; sum < max; i++)
	{
		if (is_prime(i))
		{
			cout << i << '\t';
			sum++;
			if (sum % 10 == 0)
				cout << '\n';
		}
	}
	return 0;
}
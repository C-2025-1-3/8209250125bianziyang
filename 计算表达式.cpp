#include<iostream>
using namespace std;
int main()
{
	float x;
	cout << "请输入一个小于10且大于0的x:" ;
	cin >> x;
	if (x > 0)
	{
		if (x < 10)
		{
			if (x < 5)
			{
				if (x < 1)
				{
					cout << 3 - x * 2 << endl;
				}
				else cout << 1 / (x * 2) + 1 << endl;
			}
			else cout << x * x << endl;
		}
		else cout << "看题呦宝宝，输入小于10且大于0的数，你已经浪费一次免费运算机会（手动狗头），so请重试吧" << endl;
	}
	else cout << "看题呦宝宝，输入小于10且大于0的数，你已经浪费一次免费运算机会（手动狗头），so请重试吧" << endl;
}
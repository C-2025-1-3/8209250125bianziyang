#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入一个三角形的三边长:"  ;
	cin >> a >> b >> c;
	if (a < b + c)
	{
		if (b < a + c)
		{
			if (c < a + b)
			{
				if (a != b)
				{
					if (a != c)
					{
						if (b != c)
							cout << "废了，连等腰三角形都不是";
						else cout << "呦，你小子可以啊，这是等腰三角形";
					}
					else cout << "呦，你小子可以啊，这是等腰三角形";
				}
				else cout << "呦，你小子可以啊，这是等腰三角形" ;
			}
			else cout << "不是哥们，小学没学好吗，什么是三角形都不清楚...";
		}
		else cout << "不是哥们，小学没学好吗，什么是三角形都不清楚...";
	}
	else cout << "不是哥们，小学没学好吗，什么是三角形都不清楚...";
}
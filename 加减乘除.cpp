#include<iostream>
using namespace std;
int main()
{
	float n, m;
	char f;
	cout << "请输入两个数字和一个运算符：" << endl;
	cin >> n >> m >> f;
	switch (f)
	{
	case'+':
		cout << "运算结果为：" << n + m << endl;
		break;
	case'-':
		cout << n - m << endl;
		break;
	case'*':
		cout << n * m << endl;
		break;
	case'/':
		if (m == 0)
			cout << "分母不能为0！" << endl;
		else
			cout << n / m << endl;
		break;
	default:
		cout << "错误！你输入的运算符" << f << "暂不支持，仅支持+-*/" << endl;
	}
	return 0;
}
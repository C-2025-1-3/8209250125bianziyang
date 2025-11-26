#include<iostream>
#include <iomanip>    
using namespace std;
int main()
{
	float i;
	cout << "请输入华氏度:"; cin >> i;
	i = (i - 32)*5/9;
	cout << setprecision(3) << "它所代表的摄氏度是" << i;
}
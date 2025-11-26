/*
原题：找错误
#include<iostream>
using namespace std;
int main()
{
	Int i = k + 1;     //1.没有定义“k”  2.Int不用大写
	cout << i++ << endl;    //如果想要i自加后输出，应用++i
	int i = 1;            //不能多次定义i，去掉int
	cout << i++ << endl;    //如果想要i自加后输出，应用++i
	cout << "Welcome to C++" << endl;
	return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
	int k = 2;
	int i = k + 1;
	cout << ++i << endl;
	i = 1;
	cout << ++i << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
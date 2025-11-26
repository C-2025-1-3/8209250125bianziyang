#include<iostream>
using namespace std;
int main()
{
	char c;
	int letter = 0,
		space = 0,
		number = 0,
		other = 0;
	cout << "请输入一串字符：" ;
	while ((c = cin.get()) != '\n')  
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letter++;
		else 
		{
			if (c == ' ')
				space++;
			else 
			{
				if (c >= '0' && c <= '9')
					number++;
				else other++;
			}
		}
	}
	cout << "英文字母个数：" << letter << endl;
	cout << "空格个数：" << space << endl;
	cout << "数字字符个数：" << number << endl;
	cout << "其他字符个数：" << other << endl;
	return 0;
}
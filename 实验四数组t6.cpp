/*
6、字符串中每个字母出现的次数：
请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
void count(const char s[], int counts[])
counts是一个有26个元素的整数数组。const[0]，const[1]，…，const[25]分别记录a，b，…，z出现的次数。字母不分大小写，例如字母A和字母a都被看作a。
编写测试程序，读入字符串并调用count函数，显示非零的次数。
*/

#include <iostream>
using namespace std;

void count(const char s[], int counts[]) 
{
    for (int i = 0; s[i] != '\0'; ++i) 
    {
        char c = s[i];
        // 判断是否是小写字母
        if (c >= 'a' && c <= 'z') 
        {
            counts[c - 'a']++;
        }
        // 判断是否是大写字母
        else if (c >= 'A' && c <= 'Z') 
        {
            counts[c - 'A']++;
        }
    }
}


int main() {
    const int letter = 26;
    int counts[letter] = { 0 };
    char str[1000];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    count(str, counts);

    for (int i = 0; i < letter; ++i) {
        if (counts[i] > 0) {
            cout << char('a' + i) << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}



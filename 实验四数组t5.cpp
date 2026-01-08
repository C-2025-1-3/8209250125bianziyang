/*
5、检验子串：
编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
int indexOf(const char s1[], const char s2[])
编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。
*/

#include <iostream>
using namespace std;

// 手动计算字符串长度
int strlength(const char s[])
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}

// 函数定义：检验 s1 是否是 s2 的子串
int indexOf(const char s1[], const char s2[]) 
{
    int len1 = strlength(s1); // 手动计算 s1 的长度
    int len2 = strlength(s2); // 手动计算 s2 的长度

    // 如果 s1 比 s2 长，不可能是子串
    if (len1 > len2) 
    {
        return -1;
    }

    for (int i = 0; i <= len2 - len1; ++i) 
    {
        int j;
        for (j = 0; j < len1; ++j) 
        {
            if (s2[i + j] != s1[j]) 
            {
                break;
            }
        }

        // 如果内层循环正常结束，说明找到了子串
        if (j == len1) 
        {
            return i;
        }
    }

    // 没有找到子串
    return -1;
}

int main() 
{
    char s1[100];
    char s2[100];

    // 读取第一个字符串
    cout << "Enter the first string: ";
    cin.getline(s1, 100);       //oio！找到的无敌函数getline:从输入流中读取字符，直到遇到换行符（回车）或达到指定的最大长度，然后将读取的内容存储到字符数组中

    // 读取第二个字符串
    cout << "Enter the second string: ";
    cin.getline(s2, 100);

    // 调用 indexOf 函数并输出结果
    int result = indexOf(s1, s2);
    cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;

    return 0;
}



/*
1)编写函数检查字符串s1是否为字符串s2的子串，若是，返回第一次匹配的下标，否则返回-1。在主程序中输入字符串s1与s2，调用函数实现。
函数原型：int indexof(const char *s1,const char *s2);
*/

#include <iostream>
using namespace std;

int indexOf(const char* s1, const char* s2) {
    // 计算 s1 的长度
    int len1 = 0;
    while (s1[len1] != '\0') 
    {
        len1++;
    }

    // 计算 s2 的长度
    int len2 = 0;
    while (s2[len2] != '\0') 
    {
        len2++;
    }

    // 如果 s1 比 s2 长，直接返回 -1
    if (len1 > len2) 
    {
        return -1;
    }

    // 外层循环：遍历 s2 的每个可能起始位置
    for (int i = 0; i <= len2 - len1; i++) 
    {
        bool match = true;

        // 内层循环：逐个字符比较 s1 和 s2 当前位置的子串
        for (int j = 0; j < len1; j++) 
        {
            if (s2[i + j] != s1[j]) 
            {
                match = false;
                break;
            }
        }

        // 如果匹配成功，返回当前起始下标
        if (match) 
        {
            return i;
        }
    }

    // 遍历完都没找到，返回 -1
    return -1;
}

int main() 
{
    char s1[100], s2[100];

    cout << "请输入字符串 s1: ";
    cin.getline(s1, 100);
    cout << "请输入字符串 s2: ";
    cin.getline(s2, 100);

    int result = indexOf(s1, s2);

    if (result != -1) 
    {
        cout << "字符串 s1 在字符串 s2 中第一次出现的下标是: " << result << endl;
    }
    else 
    {
        cout << "字符串 s1 不是字符串 s2 的子串" << endl;
    }

    return 0;
}


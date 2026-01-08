#include <iostream>
using namespace std;

int parseHex(const char* const hexString) 
{
    int result = 0, length = 0;
    while (hexString[length] != '\0') 
    {
        length++;
    }
    for (int i = 0; i < length; i++) 
    {
        char c = hexString[i];
        int digit;
        if (c >= '0' && c <= '9') 
        {
            digit = c - '0';
        }
        else if (c >= 'A' && c <= 'F') 
        {
            digit = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') 
        {
            digit = c - 'a' + 10;
        }
        else 
        {
            // 处理非法字符，这里简单返回0
            return 0;
        }
        result = result * 16 + digit;
    }
    return result;
}

int main()
{
    cout << parseHex("A5") << endl;
    return 0;
}
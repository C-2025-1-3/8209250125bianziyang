/*
1、打印不同的数：
编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。
*/


#include <iostream>
using namespace std;

int main() 
{
    const int max = 100;  // 假设输入的数不超过 100，可根据需求调整
    int arr[max];         // 存储不重复的数
    bool visited[max];    // 标记某个数是否已存入 arr
    int n, cnt = 0;  // cnt 记录 arr 中已经存了多少个不重复的数

    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; i++)        //修改i可改变输入数目
    {
        cin >> n;       
        bool have = false;

        // 检查 n 是否已经存在于 arr 中
        for (int j = 0; j < cnt; j++) 
        {
            if (arr[j] == n) 
            {
                have = true;
                break;
            }
        }

        // 如果没重复，就加入 arr，并标记
        if (have == false) 
        {
            arr[cnt] = n;
            visited[n] = true;  
            cnt++;
        }
    }

    // 输出所有不重复的数
    cout << "The distinct numbers are: ";
    for (int i = 0; i < cnt; i++) 
    {
        cout << arr[i] << '\t';
    }
    return 0;
}

/*
4、合并两个排列好的数组：
编写如下函数，合并两个排列好的数组，形成一个新的排列好的数组。
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
使用size1+size2次比较实现函数。编写测试程序，提示用户输入两个排列好的数组，并显示合并以后的数组。
注意，输入数据的第一个数字是数组的元素数，而不是数组的一部分。假定数组大小不超过80。
*/

#include <iostream>
using namespace std;

// 合并两个有序数组的函数
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) 
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) 
    {
        if (list1[i] < list2[j]) 
        {
            list3[k++] = list1[i++];
        }
        else 
        {
            list3[k++] = list2[j++];
        }
    }
    while (i < size1) 
    {
        list3[k++] = list1[i++];
    }
    while (j < size2) 
    {
        list3[k++] = list2[j++];
    }
}

int main() 
{
    const int max = 80;
    int list1[max], list2[max], list3[2 * max];
    int size1, size2;

    // 输入第一个数组
    cout << "Enter list1: ";
    cin >> size1;
    for (int i = 0; i < size1; ++i) 
    {
        cin >> list1[i];
    }

    // 输入第二个数组
    cout << "Enter list2: ";
    cin >> size2;
    for (int i = 0; i < size2; ++i) 
    {
        cin >> list2[i];
    }

    // 合并数组
    merge(list1, size1, list2, size2, list3);

    // 输出合并后的数组
    cout << "The merged list is ";
    for (int i = 0; i < size1 + size2; ++i) 
    {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}
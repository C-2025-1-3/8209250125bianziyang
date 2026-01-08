/*
利用起泡排序算法编写一个排序函数。起泡排序算法分若干趟对数组进行处理。每趟处理中，对相邻元素进行比较。若为降序，则交换；否则，保持原顺序。此技术被称为起泡排序（bubble sort）或下沉排序（sinking sort），因为较小的值逐渐地“冒泡”到上部，而较大值逐渐下沉到底部。
算法可描述如下：
bool changed = true;
do
{
changed = false;
for (int j = 0; j < listSize – 1; j++)
    if (list[j] > list[j+1])
    {
      swap list[j] with list[j+1];
      changed = true;
    }
} while (changed);
很明显，循环结束后，列表变为升序。容易证明do循环最多执行listSize – 1次。
*/

#include <iostream>
using namespace std;

void bubu(double arr[], int n) 
{
    bool changed = true;
    for (int i = 0; i < n - 1 && changed; ++i) 
    {
        changed = false;
        for (int j = 0; j < n - i - 1; ++j) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // 交换arr[j]和arr[j+1]
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                changed = true;
            }
        }
    }
}

int main() {
    const int max = 10;
    double arr[max];

    // 读取10个双精度数字
    cout << "请输入10个双精度数字，用空格分隔: ";
    for (int i = 0; i < max; ++i) 
    {
        cin >> arr[i];
    }
    bubu(arr, max);

    // 显示排序后的数字
    cout << "排序后的数字: ";
    for (int i = 0; i < max; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
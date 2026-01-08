#include <iostream>
using namespace std;

void sortArray(int* arr, int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
        {
            if (*(arr + j) > *(arr + j + 1)) 
            {
                // 交换两个元素
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() 
{
    int size;
    cout << "请输入数组的元素个数: ";
    cin >> size;

    int* dynamicArray = new int[size];
    cout << "请输入数组的元素: ";
    for (int i = 0; i < size; ++i) 
    {
        cin >> *(dynamicArray + i);
    }

    sortArray(dynamicArray, size);

    cout << "排序后的数组元素: ";

    // 用指针方式输出数组元素
    for (int i = 0; i < size; ++i) 
    {
        cout << *(dynamicArray + i) << " ";
    }

    delete[] dynamicArray;

    return 0;
}
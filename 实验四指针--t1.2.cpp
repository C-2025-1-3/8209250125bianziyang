#include <stdio.h>
using namespace std;
int main() {
    int a[] = { 1, 2, 3 }; 
    int* p, i;
    p = a;  // 将数组a的首地址赋值给指针p
    for (i = 0; i < 3; i++) 
    {
        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
    }
    return 0;
}
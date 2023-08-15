#include<stdio.h>
int main()
{
    int a[10];
    int* p = a;
    printf("%p\n", a);
    printf("%p\n", p); c c
    for (int index = 0; index < 10; index++)
    {
        a[index] = index;
    }
    printf("%d\n", *(p+5));

    // int* c = a + p;
    // p * 5;
    return 0;
}
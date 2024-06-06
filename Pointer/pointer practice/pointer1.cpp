#include<stdio.h>
int main()
{
    int a = 100;
    int *p;
    p = &a;

    printf("value at using pointer: %d",*p);

    return 0;
}
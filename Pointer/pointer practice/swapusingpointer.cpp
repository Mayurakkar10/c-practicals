#include<stdio.h>
int main()
{
    int a=100,b=200;
    int *p,*q;
    p = &a;
    q = &b;
    printf("\nBefore swap: a = %d,b = %d",a,b);

    int temp = *p;
    *p = *q;
    *q = temp;
    
    printf("\nAfter swap: a = %d,b= %d",a,b);
    return 0;
}
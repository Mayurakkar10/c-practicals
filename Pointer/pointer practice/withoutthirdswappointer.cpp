#include<stdio.h>
int main()
{
    int a=100,b=200;
    int *p,*q;
    p = &a;
    q = &b;
    printf("\nBefore swap: a= %d,b= %d",a,b);
    *p = *p+*q;//100+200=300
    *q = *p -*q;//300-100=200
    *p = *p - *q;//300-200=100
    printf("\nAfter swap: a= %d,b= %d",a,b);
    return 0;
}
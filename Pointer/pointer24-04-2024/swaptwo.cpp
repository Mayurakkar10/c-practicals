#include<stdio.h>
int main()
{
    int *ptr1,*ptr2,a=100,b=200;
    ptr1 = &a;
    ptr2 = &b;
    printf("Before swap: \na = %d b= %d\n",a,b);
    int temp = *ptr1;
    *ptr1  = *ptr2;
    *ptr2 = temp;
    printf("After swap: \na = %d b= %d",a,b);
}
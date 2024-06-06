#include<stdio.h>
int main()
{
    int* ptr;
    int* ptr1;
    int a=100;
    ptr = &a;
    ptr1= &ptr;

    printf("address at of ptr",ptr);

    
    return 0;
}
#include<stdio.h>
int main()
{
    int *ptr,a=100;
    ptr = &a;
    printf(" ptr = %u\n",ptr);
    printf("*ptr = %d",*ptr);
    return 0;
}
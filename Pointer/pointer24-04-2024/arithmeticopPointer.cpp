#include<stdio.h>
int main()
{
    int *ptr1,*ptr2,a=100,b=200;
    ptr1 = &a;
    ptr2 = &b;
    printf("addition= %d\n",*ptr1+*ptr2);
    printf("Substraction= %d\n",*ptr1-*ptr2);
    printf("Multiplication= %d\n",*ptr1 * *ptr2);
    printf("division= %d\n",*ptr1 / *ptr2);
    return 0;
}
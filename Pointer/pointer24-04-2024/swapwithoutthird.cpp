#include<stdio.h>
int main()
{
    int *ptr1,*ptr2,a=100,b=200;
    ptr1 = &a;
    ptr2 = &b;
     
    printf("Before swap: a = %d b = %d\n",a,b);
    *ptr2 = *ptr1 +*ptr2;// b= 100+200//300
    *ptr1 =  *ptr2-*ptr1;// a = 300-100= 200
    *ptr2 = *ptr2-*ptr1; // b = 300-200 = 100
    printf("After swap: a = %d b = %d",a,b);
    
    return 0;
}
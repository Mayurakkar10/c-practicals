//program to find power of number using while
#include<stdio.h>
int main()
{
    int base,index,p=1,i=1;
    printf("\nEnter base and power: ");
    scanf("%d%d",&base,&index);
    while(i<=index) 
    {
        p = p*base;
        i++;  
    }
    printf("power = %d",p);
    return 0;
}
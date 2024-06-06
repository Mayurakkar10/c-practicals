//program to count number of digit in a number
#include<stdio.h>
int main()
{
    int count=0,num;
    printf("\nEnter number: ");
    scanf("%d",&num);
    
    while(num>0)
    {
        num=num/10;
        ++count;
    }
    printf("number of digit = %d",count);
    return 0;
}
//program to find sum of first and last digit of number
#include<stdio.h>
int main()
{
    int num,last,first;
    printf("\nEnter number: ");
    scanf("%d",&num);
    last = num%10;
    while(num>=10)
    {
        num = num/10;

    }
    first  = num;
printf("sum = %d",first+last);
}
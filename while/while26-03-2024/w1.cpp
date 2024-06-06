//program to calculate sum of digits of a number
#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("\nEnter number: ");
    scanf("%d",&num);
    int temp = num;
    while(num>0)
    {
       rem = num%10;
       num = num/10;
       sum = sum+rem;
    }
    
    printf("sum = %d",sum);

    return 0;
}
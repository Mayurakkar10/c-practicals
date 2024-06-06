//program to check whether a number is happy number or not
#include<stdio.h>
int main()
{
    int num,rem;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    int temp = num;
    while(temp!=1)
    {
        int sum = 0;
        while(temp>0)
        {
            rem = temp%10;
            sum = sum+(rem*rem);
            temp = temp/10;
        }
        temp =sum;
        printf("sum = %d",sum);
    }
    
    if(temp==1)
    {
        printf("happy number");
    }
    else
    {
        printf("not a happy number");
    }
    
    return 0;
}
//program to check whether a number is neon or not
#include<stdio.h>
int main()
{
    int num,square,sum=0,rem;
    printf("\nEnter number: ");
    scanf("%d",&num);

    square = num*num;


    while(square!=0)
    {
        rem = square%10;
        square = square/10;
        sum = sum+rem;
    }
    
    if(sum==num)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not a Neon Number");
    }
    return 0;
}
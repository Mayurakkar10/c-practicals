//program to check whether a number is spy or not
#include<stdio.h>
int main()
{
    int num,product=1,sum=0,rem;
    printf("\nEnter a number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem = num%10;
        num = num/10;
        sum = sum +rem;
        product = product*rem;
    }
   
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not a Spy Number");
    }
    return 0;
}
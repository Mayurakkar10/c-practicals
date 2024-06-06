//program to check whether a number is strong ex.1,2,145
#include<stdio.h>
int main()
{
    int num,temp,i,fact,sum,rem;
    printf("\nEnter number: ");
    scanf("%d",&num);
    temp = num;
    sum =0;
    while(temp!=0)
    {
        rem=temp%10;
        fact = 1;
        i = 1;
        while(i<=rem)
        {
            fact = fact * i;
            i++;
        }

        sum =sum+fact;
        temp = temp/10;
    }
  
    if(sum==num)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a Strong number");
    }
    
    return 0;
}
#include<stdio.h>
int main()
{ 
    int num;
    int isPerfectNum(int);
    printf("\nEnter a number: ");
    scanf("%d",&num);
    isPerfectNum(num);
    return 0;
}

int isPerfectNum(int num)
{
    int i= 1,sum=0;
    while(i<num)
    {
        if(num%i ==0)
        {
            sum = sum+i;
        }
        i++;
    }
    if(num==sum)
    {
       printf("Perfect Number");
    }
    else
    {
        printf("Not a perfect Number");
    }
}
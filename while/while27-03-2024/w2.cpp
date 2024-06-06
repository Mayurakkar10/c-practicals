#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    int i = 1;
    while(i<num)
    {
        if(num%i ==0)
        {
          sum = sum+i;
        }
        i++;
    }

    printf("sum=%d\n num = %d",sum,num);
    if(sum==num)
    {
        printf("perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }
    return 0;
}
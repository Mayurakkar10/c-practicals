//program to print all odd numbers from 1 to n
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("\nEnter limit: ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0)
        {
            sum = sum+i;
        }
        i++;
    }
    printf("sum = %d",sum);
    return 0;
}
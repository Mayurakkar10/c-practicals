//program to print 1 to n perfect number
#include<stdio.h>
int main()
{
    int n,sum;
    printf("\nEnter limit: ");
    scanf("%d",&n);

    for(int i=1; i<=n;i++)
    {
        sum = 0;
        for(int j = 1;j<i;j++)
        {
            if(i%j == 0)
            {
                sum = sum +j;
            }
        }
        if(sum==i)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}
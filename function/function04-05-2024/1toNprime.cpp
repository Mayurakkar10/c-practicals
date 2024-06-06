#include<stdio.h>

int main()
{
    int limit;
    void onetoNprime(int);
    printf("\nEnter limit: ");
    scanf("%d",&limit);
    onetoNprime(limit);
    return 0;
}

void onetoNprime(int limit)
{
    int i,j,flag;
    for(int i =2;i<=limit;i++)
    {
        flag = 0;
        for(int j =2;j<i;j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }

        if(!flag)
        {
            printf("%d ",i);
        }
    }
}
#include<stdio.h>
int main()
{
    int limit;
    void onetoNstrong(int);
    printf("\nEnter limit: ");
    scanf("%d",&limit);
    
    onetoNstrong(limit);
    return 0;
}
void onetoNstrong(int limit)
{
    for (int i = 1; i <=limit; i++)
    {
        int temp = i,sum=0;
        while(temp!=0)
        {
            int rem = temp%10;
            int j= 1,fact = 1;
            while(j<=rem)
            {
                fact = fact*j;
                j++;
            }
            sum = sum+fact;
            temp = temp/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
    
}
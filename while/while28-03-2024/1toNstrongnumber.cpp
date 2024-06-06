//program to 1 to n strong number
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter limit: ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++)
    {
        int sum =0;
        int temp =i;
        while(temp!=0)
        {
            int rem = temp%10;
            int fact = 1;
            int j=1;
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
            printf("%d\t",i);
        }
    }
    return 0;
}
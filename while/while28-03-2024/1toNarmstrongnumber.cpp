//program to 1 to n Armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("\nEnter limit: ");
    scanf("%d",&n);
    
    for(int i = 1;i<=n;i++)
    {
        int count = 0;
        int temp = i;
        int sum = 0;
        while(temp!=0)
        {
            temp=temp/10;
            count++;
        }

        temp = i;
        while(temp!=0)
        {
            int rem= temp%10;
            temp = temp/10;
            sum = sum+pow(rem,count);
        }

        if(sum==i)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}
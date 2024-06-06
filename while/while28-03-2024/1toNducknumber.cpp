//program to print 1 to n duck number
#include<stdio.h>
int main()
{
    int n,rem;
    printf("\nEnter limit: ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++)
    {
         int flag=0;
         int temp = i;
         while(temp!=0)
         {
            rem = temp%10;
            if(rem==0)
            {
                flag = 1;
                break;
            }
            temp =temp/10;
         }
         if(flag)
         {
            printf("%d\t",i);
         }
    }
    
    return 0;
}
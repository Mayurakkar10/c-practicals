//program to print 1 to n prime number
#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter limit: ");
    scanf("%d",&n);
    int i = 1;
    while(i<=n)
    {
        int count = 0;
        int j = 1;
        while(j<=i)
        {
            if(i%j ==0)
            {
                ++count;
            }
            j++;
        }

        if(count==2)
        {
            printf("%d\t",i);
        }
        i++;
    }

}
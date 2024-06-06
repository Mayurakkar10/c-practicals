//program to print all odd numbers
#include<stdio.h>
int main()
{
    int i=1,limit;
    printf("\nEnter limit: ");
    scanf("%d",&limit);
    while(i<=limit)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
        }
        i++;
    }
    return 0;
}
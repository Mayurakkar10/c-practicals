//program to print all even numbers from 1 to n
#include<stdio.h>
int main()
{
    int limit,i=1;
    printf("\nEnter limit: ");
    scanf("%d",&limit);
    while(i<=limit)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
           
        }
         i++;
    }
    return 0;
}
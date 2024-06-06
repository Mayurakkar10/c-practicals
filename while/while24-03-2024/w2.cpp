//program to print all natural numbers in reverse
#include<stdio.h>
int main()
{
    int limit,i=1;
    printf("\nEnter limit: ");
    scanf("%d",&limit);
    while(i<=limit)
    {
        printf("%d\t",limit);
        limit--;
    }
    return 0;
}
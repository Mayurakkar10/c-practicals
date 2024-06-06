//program to print all natural numbers from 1 to n
#include<stdio.h>

int main()
{
    int num,i=1;
    printf("Enter limit: ");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("%d\t",i);
        i++;
    }
    return 0;
}
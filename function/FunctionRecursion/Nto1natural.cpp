//program to print natural numbers from N to 1 using function Recursion
#include<stdio.h>
int main()
{
    int limit;
    void ntoOneNatural(int);
    printf("\nEnter limit: ");
    scanf("%d",&limit);
    ntoOneNatural(limit);
    return 0;
}
void ntoOneNatural(int limit)
{
    if(limit!=0)
    {
        printf("%d ",limit);
        ntoOneNatural(limit-1);
    }
    else
    {
        printf("END");
    }
}
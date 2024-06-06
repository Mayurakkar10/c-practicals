//program to print natural numbers from N to 1 using function Recursion
#include<stdio.h>
int i= 1;
int main()
{
    int limit;
    void onetoNnatural(int);
    printf("\nEnter limit: ");
    scanf("%d",&limit);
    onetoNnatural(limit);
    return 0;
}
void onetoNnatural(int limit)
{
    
    if(i<=limit)
    {
        printf("%d ",i);
        i++;
        onetoNnatural(limit);
    }
    else
    {
        printf("END");
    }
}
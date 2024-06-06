//1toN even numbers using function recursion
#include<stdio.h>
int i=1;
int main()
{
    int limit;
    void onetoNeven(int);
    printf("\nEnter limit: ");
    scanf("%d",&limit);
    onetoNeven(limit);
    return 0;
}
void onetoNeven(int limit)
{
    if(i<=limit)
    {
        if(i%2==0)
        {
            printf("%d ",i); 
        }
        i++;
        onetoNeven(limit);
    }
    else
    {
        printf("\nEND");
    }
}
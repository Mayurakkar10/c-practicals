//print sum of all natural numbers from 1 to N using function recursion
#include<stdio.h>
int i = 0,sum=0;
int main()
{
    int limit;
    void sumonetoNnatural(int);
    printf("\nEnter limit: ");
    scanf("%d",&limit);
    sumonetoNnatural(limit);
    return 0;
}
void sumonetoNnatural(int limit)
{
     if(i<=limit)
     {
        sum = sum+i;
        i++;
        sumonetoNnatural(limit);
     }
     else
     {
        printf("sum = %d",sum);
     }
}


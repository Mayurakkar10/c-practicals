//print sum of all even numbers from 1 to N using function recursion
#include<stdio.h>
int i = 1,sum=0;
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
        if(i%2==0)
        {
            sum= sum+i;
        }
        i++;
        sumonetoNnatural(limit);
     }
     else
     {
        printf("sum = %d",sum);
     }
}



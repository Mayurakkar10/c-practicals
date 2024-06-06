#include<stdio.h>
int main()
{
    int a[5];
    int *p;
    p = a;
    int sum= 0;
    printf("\nEnter array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&p[i]);
    }

    for(int i=0;i<5;i++)
    {
        sum = sum+p[i];
    }
    printf("sum = %d",sum);
    
    return 0;
}
#include<stdio.h>
int main()
{
    int a[5],b[5];
    int *p,*q;
    p = a,
    q = b;
    printf("\nEnter array: ");
    for(int i= 0;i<5;i++)
    {
        scanf("%d",&p[i]);
    }

    for(int i = 0;i<5;i++)
    {
        q[i] = p[i];
    }

    for(int i = 0;i<5;i++)
    {
        printf("%d ",q[i]);
    }
    return 0;
}
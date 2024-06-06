#include<stdio.h>
int main()
{
    int a[5];
    int *p;
    p = a;

    printf("\nEnter array: ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&p[i]);
    }

    printf("\nEnter array: ");
    for (int  i = 0; i < 5; i++)
    {
        printf("%d ",*p);
        p++;
    }

    
    return 0;
}
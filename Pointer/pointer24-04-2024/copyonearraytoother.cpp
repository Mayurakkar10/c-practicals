#include<stdio.h>
int main()
{
    int *ptr1,*ptr2,a[5],c[5];

    ptr1 = a;
    ptr2  = c;
    
    printf("\nEnter array: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i = 0;i<5;i++)
    {
        *(c+i)= *(a+i);
    }

    printf("\nDisplay array: \n");
    for(int i = 0;i<5;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a[5],b[5];
    int size1 = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);
    int merged[size1+size2];
    printf("\nEnter first array: ");
    for(int i = 0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter second array: ");
    for(int i = 0;i<size2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(int i = 0;i<size1;i++)
    {
        merged[i] = a[i];
    }

    for(int i= 0;i<size2;i++)
    {
        merged[size1+i] = b[i];
    }

    
    printf("Display array: \n");
    for(int i = 0;i<size1+size2;i++)
    {
        printf("%d\t",merged[i]);
    }
    return 0;
}
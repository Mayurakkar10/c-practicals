#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter size: ");
    scanf("%d",&n);
    int a[n];
    int size = sizeof(a)/sizeof(a[0]);
    printf("\nEnter array: ");
    for(int i= 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(int i = 0;i<size/2;i++)
    {
        int temp = a[i];
        a[i] = a[size-i-1];
        a[size-1-i] = temp;
    }

    printf("\nDisplay array: \n");
    for(int i = 0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
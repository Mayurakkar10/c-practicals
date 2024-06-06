//delete element at any index of an array
#include<stdio.h>
int main()
{
    int a[5],pos;
    int size = sizeof(a)/sizeof(a[0]);

    printf("\nEnter array: ");
    for(int i= 0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter element: ");
    scanf("%d",&pos);


    for(int i= pos-1;i<size;i++)
    {
        a[i] = a[i+1];
    }
    size--;

    printf("\nDisplay array: ");
    for(int i= 0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
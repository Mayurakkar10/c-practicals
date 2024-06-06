#include<stdio.h>
int main()
{
    int a[100],size,pos;
    printf("\nEnter size: ");
    scanf("%d",&size);

    printf("\nEnter array: ");
    for(int i= 0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter posison to delete: ");
    scanf("%d",&pos);


    //logic for delete
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
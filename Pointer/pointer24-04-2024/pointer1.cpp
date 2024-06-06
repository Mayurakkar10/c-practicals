#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int size;
    printf("\nEnter size: ");
    scanf("%d",&size);
    ptr = (int*)malloc(sizeof(int)*size);
    
    printf("\nEnter values in array: ");
    for(int i= 0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("\nDisplay array: \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",ptr[i]);
    }
    return 0;
}
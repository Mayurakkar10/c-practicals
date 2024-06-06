#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int size;
    printf("\nEnter size: ");
    scanf("%d",&size);

    ptr = (int*)malloc(sizeof(int)*size);
    
    printf("\nEnter Array: ");
    for(int i= 0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }


    int max = ptr[0];
    for(int i= 0;i<size;i++)
    {
        if(ptr[i]>max)
        {
            max = ptr[i];
        }
    }

    printf("max = %d",max);


    return 0;
}
#include<stdio.h>
int main()
{
    int size;
    printf("\nEnter size; ");
    scanf("%d",&size);
    int a[size],position;
    printf("\nEnter array: ");
    for(int i= 0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter position: ");
    scanf("%d ",&position);

    for(int i = 0;i<position;i++)
    {
         int temp = a[0];
         for(int j = 0;j<size-1;j++)
         {
            a[j] = a[j+1];
         }
         a[size-1] = temp;
    }

    printf("Display array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
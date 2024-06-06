// program to remove value at any index;
#include <stdio.h>
int main()
{
    int size;
    printf("\nEnter size: ");
    scanf("%d",&size);
    
    int a[size], index;
    printf("\nEnter array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter index: ");
    scanf("%d", &index);
    for (int i = 0; i < size; i++)
    {
        if (a[i] == index)
        {
            printf(" ");
        }
        else
        {
            printf("%d\t",a[i]);
        }

    }

    printf("\nDisplay array: ");
    for (int i = 0; i < size-1; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}

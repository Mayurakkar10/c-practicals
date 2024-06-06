// program to sort the array in ascending order
#include <stdio.h>
int main()
{
    int a[5], b[5];
    printf("Enter array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = (i + 1); j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array after sorting: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
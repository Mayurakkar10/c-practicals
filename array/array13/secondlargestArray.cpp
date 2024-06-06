#include<stdio.h>
int main()
{
    
    int a[5],b[5];
    int size = sizeof(a)/sizeof(a[0]);
    
    printf("\nEnter sizeofarray: ");
    scanf("%d",&size);
    printf("\nEnter array: ");
    for(int i = 0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i =0;i<size;i++)
    {
        for(int j = (i+1);j<size;j++)
        {
              if(a[i]>a[j])
              {
                 int temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
              }
        }
    }
    
    for(int i = 0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nSecond largest element: %d",a[size-2]);
    return 0;
}
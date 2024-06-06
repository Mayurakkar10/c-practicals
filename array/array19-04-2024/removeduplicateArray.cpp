#include<stdio.h>
int main()
{
    
    int size;
    printf("\nEnter size: ");
    scanf("%d",&size);
    int a[size];
    int n = sizeof(a)/sizeof(a[0]);
    
    int uniqueArray[10];
    int uniqueSize = 0;
    printf("\nEnter array: ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++)
    {
        int isDuplicate = 0;
        for(int j = 0;j<uniqueSize;j++)
        {
            if(a[i]==uniqueArray[j])
            {
               isDuplicate = 1;
               break;
            }
        }

        if(!isDuplicate)
        {
            uniqueArray[uniqueSize++] = a[i];
        }

    }

    printf("Display array: ");
    for(int i = 0;i<uniqueSize;i++)
    {
        printf("%d\t",uniqueArray[i]);
    }
    return 0;
}
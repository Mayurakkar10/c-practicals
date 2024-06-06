#include<stdio.h>
int main()
{
    int a[5],b[5];

    int intersectArr[10];
    int size1 = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);
    printf("\nEnter first array: ");
    for(int i = 0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter second array: ");
    for(int i = 0;i<size1;i++)
    {
        scanf("%d",&b[i]);
    }
    
    int intersectSize = 0;

    for(int i =0;i<size1;i++)
    {
        for(int j = 0;j<size2;j++)
        {
            if(a[i] == b[j])
            {
                intersectArr[intersectSize++] = a[i];
                break;
            }
        }
    }

    //display array;

    printf("\nIntersection of array: ");
    for(int i = 0;i<intersectSize;i++)
    {
        printf("%d ",intersectArr[i]);
    }
}
#include<stdio.h>
int main()
{
    int a[5],b[5];
    int unionArr[10];
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

    int unionSize = size1;

    for(int i = 0;i<size1;i++)
    {
        unionArr[i] = a[i];
    }
     
    
    for(int i = 0;i<size2;i++)
    {
        int present = 0;
        for(int j = 0;j<unionSize;j++)
        {
            if(b[i] == unionArr[j])
            {
                present = 1;
                break;
            }
        }
        if(!present)
        {
            unionArr[unionSize++] = b[i];
        }
    }

    //display union array
    for(int i= 0;i<unionSize;i++)
    {
        printf("%d ",unionArr[i]);
    }
    return 0;
}
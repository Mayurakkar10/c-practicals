#include<stdio.h>
int main()
{
    int a[3][3],T[3][3];

    printf("\nEnter first array: \n");
    for(int i= 0;i<3;i++)
    {
        for(int j= 0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nDisplay Before transpose matrix: \n");
    for(int i = 0;i<3;i++)
    {
        for(int j= 0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //logic for transpose of matrix
    for(int i=0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
             T[i][j] = a[j][i];
        }
    }

    printf("\nDisplay after transpose matrix: \n");
    for(int i = 0;i<3;i++)
    {
        for(int j= 0;j<3;j++)
        {
            printf("%d ",T[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
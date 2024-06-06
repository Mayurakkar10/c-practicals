#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],sum;

    printf("\nEnter first array: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++)
        {
             scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter second array: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++)
        {
             scanf("%d",&b[i][j]);
        }
    }


    //logic for multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            sum = 0;
            for(int k = 0;k<3;k++)
            {
                sum = sum + a[i][k] *b[k][j];
            }
            c[i][j] = sum;
        }
    }


    printf("\nDisplay Multiplication array: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++)
        {
           printf("%d ",c[i][j]);
        }
        printf("\n");
    }


    
    return 0;
}
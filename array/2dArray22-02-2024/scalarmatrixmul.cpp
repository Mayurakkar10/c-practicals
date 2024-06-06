#include<stdio.h>
int main()
{
    int a[3][3],c;

    printf("\nEnter matrix: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter scalar multiple: ");
    scanf("%d",&c);

    printf("matrix before: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    

    for(int i= 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            a[i][j] = c*a[i][j];
        }
    }

    printf("matrix after scalar multiplication: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int a[3][3],sum;
    printf("\nEnter the array: ");
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i = 0;i<3;i++)
    {
        sum  = 0;
        for(int j = 0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            sum = sum + a[i][j];
        }
        printf(" = %d\n",sum);
    }
    return 0;
}
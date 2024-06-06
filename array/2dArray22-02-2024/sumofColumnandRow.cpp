#include<stdio.h>
int main()
{
    int a[3][3],rsum,csum;

    printf("\nEnter matrix: \n");
    for(int i= 0;i<3;i++)
    {
        for(int j= 0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    

    //logic for row sum and column sum
    for(int i = 0;i<3;i++)
    {
        csum = 0;
        rsum = 0;
        for(int j = 0;j<3;j++)
        {
             rsum = rsum +a[i][j];
             csum = csum +a[j][i]; 
             printf("%d ",a[i][j]);
        }

      printf(" row sum = %d",rsum);
      printf(" Column sum = %d",csum);
      printf("\n");
    }
    return 0;
}
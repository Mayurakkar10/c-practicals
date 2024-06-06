#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],flag = 1;
    
    printf("\nEnter first matrix: ");
    for(int i = 0;i<3;i++)
    {
      for(int j = 0;j<3;j++)
      {
          scanf("%d",&a[i][j]);
      }
    }
    
    printf("\nEnter second matrix: ");
    for(int i = 0;i<3;i++)
    {
      for(int j = 0;j<3;j++)
      {
          scanf("%d",&b[i][j]);
      }
    }

    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
    {
        printf("matrix are equal");
    }
    else
    {
        printf("Matrix are not equal");
    }
    return 0;
}
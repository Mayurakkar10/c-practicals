#include<stdio.h>
int main()
{
    int a[6][4] = { {5,7,3,2},{8,6,5,9},{2,5,3,4},{9,6,2,5},{7,3,5,4},{1,3,2,5}};


    // printf("\nEnter array: ");
    

    //  for(int i = 0;i<6;i++)
    // {
    //     for(int j = 0;j<4;j++)
    //     {
           
    //         printf("%d",a[i][j]);
    //     }
    //     printf("\t");
    // }

    printf("\n");
     for(int i = 0;i<6;i++)
    {
        for(int j = 0;j<4;j++)
        {
            for(int k = (j+1);k<4;k++)
            {
                if(a[i][j]>a[i][k])
                {
                    int temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
        
    }
     for(int i = 0;i<6;i++)
    {
        for(int j = 0;j<4;j++)
        {
           
            printf("%d",a[i][j]);
        }
        printf("\t");
    }

 
    

    return 0;
}
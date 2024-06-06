#include <stdio.h>
int main()
{
    int a[6][4] = {{5, 7, 3, 2}, {8, 6, 5, 9}, {2, 5, 3, 4}, {9, 6, 2, 5}, {7, 3, 5, 4}, {1, 3, 2, 5}}, choice;
    printf("\nDisplay array: ");
    for (int i = 0; i < 6; i++)
    {
        for(int j = 0;j<4;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\t");
    }
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = (j + 1); k < 4; k++)
                {
                    if (a[i][j] > a[i][k])
                    {
                        int temp = a[i][j];
                        a[i][j] = a[i][k];
                        a[i][k] = temp;
                    }
                }
            }
        }
            
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 4; j++)
                {

                    printf("%d", a[i][j]);
                }
                printf("\t");
            }

        break;
    case 2:
          for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = (j + 1); k < 4; k++)
                {
                    if (a[i][j] < a[i][k])
                    {
                        int temp = a[i][j];
                        a[i][j] = a[i][k];
                        a[i][k] = temp;
                    }
                }
            }
        }
            
            for (int i = 0; i < 6; i++)
            {
                for (int j = 0; j < 4; j++)
                {

                    printf("%d", a[i][j]);
                }
                printf("\t");
            }

        break;
    case 3:
           for(int i = 0;i<6;i++)
    {
        int sum = 0;
        for(int j = 0;j<4;j++)
        {
           sum = sum+a[i][j];
           a[i][j] = sum;
        }
        printf("%d ",sum);
    }

    default:
        break;
    }
    return 0;
}
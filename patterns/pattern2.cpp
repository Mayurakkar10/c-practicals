/*
   print following pattern
     * * * * *
     *       *
     * * * * * 
*/
#include<stdio.h>
int main()
{
    for(int i= 1;i<=3;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1||j==1||i==3||j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
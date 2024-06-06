#include<stdio.h>
int main()
{
    for(int i = 0;i<5;i++)
    {
        char ch = 'A';
        for(int j = 0;j<=i;j++)
        {
            printf("%c",ch+j);
        }
        for(int j = i-1;j>=0;j--)
        {
            printf("%c",ch+j);
        }
        printf("\n");
    }
    return 0;
}
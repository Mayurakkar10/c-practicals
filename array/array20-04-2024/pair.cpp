#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};

    for(int i= 0;i<5;i++)
    {
        for(int j = (i+1);j<5;j++)
        {
            printf("(%d,%d)\n",a[i],a[j]);
        }
        i = -1;
    }

    return 0;
}
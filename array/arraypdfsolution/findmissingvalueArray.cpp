// Write a program to enter the 5 values in ascending order and store in array and find out the missing element from array?

#include<stdio.h>
int main()
{
    int a[5]={1,4,8,9,10},start,end;

    for(int i=0;i<5;i++)
    {
        start = a[i]+1;//value
        end = a[i+1];//index
        for(int j = start;j<end;j++)
        {
            printf("Missing Element: %d\n",j);
        }
    }
    return 0;
}
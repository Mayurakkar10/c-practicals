//Program to find maxmium and minimum elements in array
#include<stdio.h>
int main()
{
    int a[5],max=0,min;
    printf("\nEnter array: ");
    for(int i= 0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0;i<5;i++)
    {
        if(a[i]>max)
        {
           max = a[i];
        }
        if(a[i]<min)
        {
           min = a[i];
        }
    }

    printf("max = %d\nmin = %d",max,min);
    
}
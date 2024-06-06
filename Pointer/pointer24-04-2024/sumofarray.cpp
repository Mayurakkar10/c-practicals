#include<stdio.h>
int main()
{
    int *ptr1,a[5],sum=0;
    ptr1 = a;

    printf("\nEnter array: ");
    for(int i= 0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }


    //logic for sum
    for(int i= 0;i<5;i++)
    {
        sum  = sum+*(a+i);
    }

    printf("sum = %d",sum);
    
    return 0;
}
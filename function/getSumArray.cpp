//getSumArray through pointer
#include<stdio.h>
int main()
{
    int a[5];
    int getSum(int *);
    printf("\nEnter values: ");
    for(int i= 0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum = getSum(a);
    printf("Sum = %d",sum);
    return 0;
}

int getSum(int *ptr){
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum = sum+ptr[i];
    }
    return sum;
}
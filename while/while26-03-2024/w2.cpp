//program to calculate sum of digits of number
#include<stdio.h>
int main()
{
    int num,rem,product=1;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%10;//
        num = num/10;
        product = product*rem;
    }
    printf("product = %d",product);
    return 0;
}
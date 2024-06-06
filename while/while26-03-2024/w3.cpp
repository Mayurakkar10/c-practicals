// program to enter a number and print its reverse
#include<stdio.h>
int main()
{
    int num,rem,rev = 0;
    printf("\nEnter number: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%10;
        num = num/10;
        rev  = rev*10 +rem; 
    }
    printf("reverse: %d",rev);
    return 0;
}
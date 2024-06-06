//program to check whether a number is palindrome or not
#include<stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("\nEnter number: ");
    scanf("%d",&num);
    int temp = num;
    while(num>0)
    {
        rem = num%10;
        num = num/10;
        rev = rev*10+rem;
    }
    num = temp;
    if(num==rev)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    return 0;
}
//program swap first and last digit of number
#include<stdio.h>
int main()
{
    int num,last;
    printf("\nEnter number: ");
    scanf("%d",&num);
    last = num%10;
    int onum= num;
    while(num>=10)
    {
        num = num/10;
    }
    
    int temp = num;
    num = last;
    last = temp;

    int result = last;
    result = (onum % 10)+result*10;
    result = (result * 10) + (onum / 10) % 10;

    printf("numberafter swap int : %d",result);
}
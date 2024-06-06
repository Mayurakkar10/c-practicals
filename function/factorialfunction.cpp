#include<stdio.h>
int main()
{
    int no;
    void factorial(int);
    printf("\nEnter number: ");
    scanf("%d",&no);
    factorial(no);
    return 0;
}
void factorial(int x){
    int fact = 1;
    for(int i = 1;i<=x;i++)
    {
        fact = fact*i;
    }
    printf("Factorial = %d",fact);
}
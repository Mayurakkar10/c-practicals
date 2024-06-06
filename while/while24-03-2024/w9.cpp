//program to print multiplication table of any number
#include<stdio.h>
int main()
{
    int num,i=1;
    printf("\nEnter number: ");
    scanf("%d",&num);
    while(i<=10)
    {
        printf("%d\n",num*i);
        i++;
    }
    return 0;
}
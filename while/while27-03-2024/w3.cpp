//program to check whether a number is duck or not
#include<stdio.h>
int main()
{
    int num,flag = 0,rem;
    printf("\nEnter duck number: ");
    scanf("%d",&num);
    while(num!=0)
    {
       rem = num%10;  //rem = 0
       num = num/10;   //1
       if(rem==0)
       {
         flag = 1;
         break;
       }
    }
    if(flag)
    {
        printf("Duck Number");
    }
    else
    {
        printf("Not a duck number");
    }
}
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int len = strlen(str),sum=0;

    //input string
    printf("\nEnter a string: ");
    gets(str);

    //logic
    for(int i= 0;i<len;i++)
    {
         if(str[i]>=48&&str[i]<=57)
         {
             sum = sum+str[i]-48;
         }
    }

    //display sum
    printf("sum = %d",sum);
    return 0;
}
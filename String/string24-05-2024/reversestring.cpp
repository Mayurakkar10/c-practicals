#include<stdio.h>
int main()
{
    char str[10];
    printf("\nEnter a string: ");
    gets(str);

    int length=0,i=0,j;
    char ch;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }

    for(i = 0,j=length-1;i<length/2;i++,j--)
    {
         ch = str[i];
         str[i] = str[j];
         str[j] = ch;
    }

    printf("Reverse string = %s",str);
    
    
    return 0;
}
#include<stdio.h>
int main()
{
    char str[10];
    printf("\nEnter a string: ");
    gets(str);


    int length=0,i=0,j,flag = 0;
    char ch;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }

    for(i = 0,j=length-1;i<length/2;i++,j--)
    {
         if(str[i] == str[j])
         {
             flag = 1;
         }
         else
         {
            flag = 0;
         }
    }
    if(flag)
    {
        printf("\nPalidrome String");
    }
    else
    {
        printf("\nNot a Palindrom string");
    }

    


    
    return 0;
}
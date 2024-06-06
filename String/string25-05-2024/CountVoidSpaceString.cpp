#include<stdio.h>
int main()
{
    char str1[10];
    int countS = 0;
    printf("\nEnter a string : ");
    gets(str1);

    for(int i= 0;str1[i]!='\0';i++)
    {
        if(str1[i] == 32)
        {
            countS++;
        }
    }
    
    printf("\nCount of Void space = %d",countS);
    
    return 0;
}
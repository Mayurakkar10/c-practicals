#include<stdio.h>
int main()
{
    char str[10];
    printf("\nEnter a string: ");
    gets(str);
    
    int length=0,i=0;
    while(str[i]!=0)
    {
        length++;
        i++;
    }
    
    int countV=0,countC=0;
    for(int i= 0;i<length;i++)
    {
         if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
         {
            countV++;
         }
         else
         {
            countC++;
         }
    }

    printf("\nCount of vowel: %d\nCount of Consonent: %d",countV,countC);
    return 0;
}
#include<stdio.h>
int main()
{
    char str1[10];
    char str2[10];

    printf("\nEnter string1: ");
    gets(str1);
    printf("\nEnter string2: ");
    gets(str2);

    int length1 = 0,length2=0,i,j;
    while(str1[i]!='\0')
    {
        length1++;
        i++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        length2++;
        i++;
    }

    for(int i= 0,j=length2;i<=length1;i++,j++)
    {
         str2[j] = str1[i];
    }

    printf("\nstr2 %s",str2);
    
    
    return 0;
}
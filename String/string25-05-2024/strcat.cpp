#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];

    //input two strings
    printf("\nEnter String1 and String2: ");
    gets(str1);
    gets(str2);

    //use strcat(); to concatenate string1 and string2
    strcat(str1,str2);

    //display strings
    printf("after concatenation\nString1: %s\nString2: %s",str1,str2);
    return 0;
}
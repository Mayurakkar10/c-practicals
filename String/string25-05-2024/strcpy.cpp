#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];

    //input two string
    printf("\nEnter String1 and String2: ");
    gets(str1);
    gets(str2);

    //use strcpy(); to copy string2 in string1;
    strcpy(str1,str2);

    //display strings
    printf("After copy\nString1: %s\nString2: %s",str1,str2);
    return 0;
}
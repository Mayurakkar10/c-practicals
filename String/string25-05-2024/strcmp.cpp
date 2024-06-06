#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];

    //input two string
    printf("\nEnter first String1 and String2: ");
    gets(str1);
    gets(str2);

    //use strcmp(); compare two string
    int result = strcmp(str1,str2);
    if(result>0)
    {
        printf("\n%s is greater",str1);
    }
    else if(result<0)
    {
        printf("\n%s is greater",str2);
    }
    else
    {
        printf("Both Strings are equal");
    }
    return 0;
}
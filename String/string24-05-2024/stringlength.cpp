#include<stdio.h>
int main()
{
    char str[10];

    printf("\nEnter a string: ");
    gets(str);

    int length = 0;
    int i = 0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }

    printf("\nLength: %d",length);

    return 0;
}
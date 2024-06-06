#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("\nEnter a string: ");
    gets(str);
    int len = strlen(str), i,j, index = 0;
    for (int i = 0; i < len; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                break;
            }
        }
        if (j == i)
        {
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
    printf("\nNewString = %s", str);
    return 0;
}
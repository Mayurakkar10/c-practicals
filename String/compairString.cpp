#include<stdio.h>
int main()
{
    char str1[10];
    char str2[10];
    printf("\nEnter str1: ");
    gets(str1);
    printf("\nEnter str2: ");
    gets(str2);

    int length1 = 0,length2 = 0,i=0,j,flag=0;
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

    for(i=0,j=0;i<length1,j<length2;i++,j++)
    {
        if(length1==length2)
        {
            if(str1[i] == str2[j])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        else if(length1>length2)
        {
            printf("\nString1 is greater in size");
            flag = 0;
        }
        else if(length1<length2)
        {
            printf("\nString 2 is greater is size");
            flag = 0;
        }
        else
        {
            printf("\nEnter valid string: ");
        }
    }

    if(flag)
    {
        printf("\nStrings are equal");
    }
    else
    {
        printf("\nString are not equal");
    }
    return 0;
}
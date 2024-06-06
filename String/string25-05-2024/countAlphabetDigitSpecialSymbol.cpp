#include<stdio.h>
int main()
{
    char str[10];
    int countA=0,countD=0,countS=0,countVoidSpace=0,length = 0,i=0;

    //input string
    printf("\nEnter a string: ");
    gets(str);

    //find the length
    while(str[i]!='\0')
    {
        length++;
        i++;
    }

    //logic
    for(int i= 0;i<length;i++)
    {
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
        {
            countA++;
        }
        else if(str[i]>=48&&str[i]<=57)
        {
            countD++;
        }
        else if(str[i] == 32)
        {
            countVoidSpace++;
        }
        else
        {
            countS++;
        }
    }

    //diplay string
    printf("\nCount of Alphabet: %d\nCount of Digit: %d\nCount of Special Symbol: %d\nCount of void space: %d",countA,countD,countS,countVoidSpace);
    return 0;
}
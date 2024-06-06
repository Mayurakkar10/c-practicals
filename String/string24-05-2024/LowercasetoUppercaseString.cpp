#include<stdio.h>
int main()
{
    char str[10];
    printf("\nEnter string: ");
    gets(str);
    int length = 0,i=0,j;
    while(str[i]!=0)
    {
        length++;
        i++;
    }

    for(int i=0;i<length;i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i] = str[i]-32;
        }
    }
    
    printf("string = %s",str);
  
    return 0;
}
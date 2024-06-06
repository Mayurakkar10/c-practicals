//program to print all ASCII character with thier value
#include<stdio.h>
int main()
{
    int  c=1;
    while(c<=255)
    {
        printf("%d of %c\n",c,c);
        c++;
    }
    return 0;
}
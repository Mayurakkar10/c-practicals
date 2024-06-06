#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int count= 0;
    fp = fopen("C://Users//Mayur//Desktop//xyz.txt","r");
    if(fp == NULL)
    {
        printf("\nFile not available");
    }
    else
    {
       while((ch=fgetc(fp))!=EOF)
       {
           count++;
       }
    }
    printf("\nNumber of Character = %d",count);
    return 0;
}
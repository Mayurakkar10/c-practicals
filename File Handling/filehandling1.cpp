#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    //open file
    fp = fopen("C://Users//Mayur//Desktop//xyz.txt","r");
    
    
    //check file is available or not
    if(fp==NULL)
    {
        printf("\nFile is not available");
    }
    else
    {
       while((ch=fgetc(fp))!=EOF)
       {
             printf("%c",ch);
       }      
    }
    return 0;
}
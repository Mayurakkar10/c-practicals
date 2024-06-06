#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1 = fopen("C://Users//Mayur//Desktop//xyz.txt","r");
    fp2 = fopen("C://Users//Mayur//Desktop//mno.txt","a");
    if(fp1==NULL)
    {
        printf("\nxyz.txt not available");
    }
    else
    {
        while((ch=fgetc(fp1))!=EOF)
        {
            fputc(ch,fp2);
        }
    }
    
    return 0;
}
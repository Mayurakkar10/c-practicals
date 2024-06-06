#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[20];
    fp = fopen("C://Users//Mayur//Desktop//xyz.txt","w");
    if(fp==NULL)
    {
        printf("\nxyz.txt not available");
    }
    else
    {
        printf("\nEnter a string: ");
        gets(ch);
        fputs(ch,fp);
    }
    
    return 0;
}
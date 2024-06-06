#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("C://Users//Mayur//Desktop//xyz.txt","w");
    if(fp==NULL)
    {
        printf("\nxyz.txt not available");
    }
    else
    {
        printf("\nEnter character: ");
        scanf("%c",&ch);
        fputc(ch,fp);
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch[20];
    fp = fopen("C://Users//Mayur//Desktop//xyz.txt","r");
    if(fp==NULL)
    {
        printf("\nxyz.txt not available");
    }
    else
    {
        
       while(!feof(fp))
       {
        fread(ch,10,1,fp);
        printf("%s",ch);
       }
    }
    
    return 0;
}
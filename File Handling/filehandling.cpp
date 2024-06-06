#include<stdio.h>
int main()
{
    FILE *fp;
    //open file
    fp = fopen("C://Users//Mayur//Desktop//xyz.txt","r");
    
    
    //check file is available or not
    if(fp==NULL)
    {
        printf("\nFile is not available");
    }
    else
    {
        printf("\nFile is available");
    }
    return 0;
}
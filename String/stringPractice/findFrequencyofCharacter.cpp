#include<stdio.h>
int main()
{
    char str[10];
    int count=0;
    printf("\nEnter a string: ");
    gets(str);
    
    for(int i= 0;str[i]!='\0';i++)
    {
    
            // count = 0;
        for(int j=i+1;str[j]!='\0';j++)
        {
            
            if(str[i] == str[j])
            {
                count++;
                printf("\nCount = of %c is %d",str[i],count);
                count=0;
            }
    
            
        }

    }
   
   
    return 0;
}
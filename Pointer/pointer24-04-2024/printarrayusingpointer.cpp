#include<stdio.h>
int main()
{
    int *ptr,a[5];
    ptr = a;
    
    printf("\nEnter array: \n");
     for(int i=0;i<5;i++)
    {
         scanf("%d ",&*a+i);
    }


    printf("Display array: \n");
    for(int i=0;i<5;i++)
    {
         printf("%d ",*(a+i));
    }    
    return 0;
}
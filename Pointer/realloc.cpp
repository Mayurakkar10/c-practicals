#include<stdio.h>
#include<stdlib.h>
int main()
{
 
    int *ptr,size,max;
    ptr = (int*)malloc(10);
    printf("Now malloc points to %u\n",ptr);
    ptr = (int*)realloc(ptr,5);
    printf("\nNow malloc points to %u\n",ptr);
    
    return 0;
}
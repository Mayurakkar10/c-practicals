#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(sizeof(int));
    *ptr = 100;
    printf("\nptr is %d\n",*ptr);
    printf("\nptr is %d\n",ptr);
    free(ptr);
    ptr = NULL;
    printf("\nptr is %d\n",ptr);

    return 0;
}
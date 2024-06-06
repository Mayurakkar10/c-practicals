//realloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int sizea,sizeb,bemp,aemp;
    printf("\nEnter size: ");
    scanf("%d",&sizea);
    ptr = (int*)malloc(sizeof(int)*sizea);
    
    printf("\nEnter before employee data: ");
    for(int i= 0;i<sizea;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(int i= 0;i<sizea;i++)
    {
        printf("%u -->%d\n",&ptr[i],ptr[i]);
    }
    sizeb  = 5;
    ptr = (int*)realloc(ptr,sizeof(int)*sizeb);
    printf("\nEnter after employee data: ");
    for(int i = sizea;i<(sizea+sizeb);i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("\nDisplay final list: ");

    for (int i = 0; i < (sizea+sizeb); i++)
    {
        printf("\n%u -->%d",&ptr[i],ptr[i]);
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    int a[10] = {1,2,3,4,10,11,12,13,14,15},index;
    int indexArray[10],remainArray[10],rotateArray[10];
     
    printf("\nEnter index to ratote: ");
    scanf("%d",&index);

    for(int i= 0;i<index;i++)
    {
        indexArray[i] = a[i];
    }

    printf("display indexarray: \n");
    for(int i= 0;i<index;i++)
    {
       printf("%d ",indexArray[i]);
    }

    for(int i= 0;i<5;i++)
    {
        remainArray[i] = a[i+index];
    }

    printf("\nDisplay remainarray:\n");
    for(int i= 0;i<10;i++)
    {
        printf("%d ",remainArray[i]);
    }
    
  
    for(int i =0;i<10;i++)
    {
        remainArray[+1] = indexArray[i];
    }

    printf("\nprint array: ");
    for(int i= 0;i<10;i++)
    {
        printf("%d ",remainArray[i]);
    }
   
    
    return 0;
}
#include<stdio.h>
int main()
{
    int a[6],index,value;
    int size = sizeof(a)/sizeof(a[0]);
    printf("\nEnter array: ");
    for (int i = 0; i < size-1; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter index: "); 
    scanf("%d",&index);
    printf("\nEnter value: ");
    scanf("%d",&value);

    for(int i= 5;i>index;i--)
    {
        a[i] = a[i-1];
    }

    a[index] = value;

    
    
    //Display array
    printf("\nDisplay array: ");
    for (int i = 0; i < size+1; i++)
    {
        printf("%d ",a[i]);
    }
    

    return 0;
}
#include<stdio.h>
int main()
{
    int *ptr,a[5];
    ptr = a;
    printf("\nEnter array: ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    //logic for sort
    for (int i = 0; i < 5; i++)
    {
        for(int j= i+1;j<5;j++)
        {
            if(*(a+i)>*(a+j))
            {
                int temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
    

    printf("\nDisplay array: ");
    for(int i= 0;i<5;i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}
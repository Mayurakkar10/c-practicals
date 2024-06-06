#include<stdio.h>
int main()
{
    int a[5] =  {25,47,42,56,32}
    ,evenArr[10],oddArr[10];
    int evenCount = 0,oddCount = 0;
    
    for(int i = 0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            evenArr[evenCount++] = a[i];
        }
        else
        {
            oddArr[oddCount++] = a[i];
        }
    }

    printf("\nEven elements are: \n");
    for(int i = 0;i<evenCount;i++)
    {
        printf("%d ",evenArr[i]);
    }
     printf("\n");    
    printf("\nOdd elements are: \n");
    for(int i = 0;i<oddCount;i++)
    {
        printf("%d ",oddArr[i]);
    }
     printf("\n");
    
    return 0;
}
//program to serach element in array
#include<stdio.h>
int main()
{
    int a[5],skey;
    printf("\nEnter array: ");
    for(int i=  0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter serachkey: ");
    scanf("%d",&skey);
    for(int i = 0;i<5;i++)
    {
        if(skey == a[i])
        {
            printf("element found at %d position",a[i]);
        }
    }

    return 0;
}
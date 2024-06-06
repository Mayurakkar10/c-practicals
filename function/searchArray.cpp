#include<stdio.h>
int main()
{
    int a[5];
    int searchArray(int[]);
    printf("\nEnter values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int flag = searchArray(a);
    
    if(flag !=-1)
    {
        printf("value found");
    }
    else
    {
        printf("value not found");
    }

    return 0;
}

int searchArray(int a[]){
    int svalue;
    int flag = -1;
    printf("\nEnter Svalue: ");
    scanf("%d",&svalue);

    for(int i= 0;i<5;i++)
    {
        if(a[i] == svalue)
        {
            flag = a[i];
        }
    }
    return flag;
}
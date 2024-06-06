//program to check whether array is palindrome or not
#include<stdio.h>
int main()
{
    int a[5],flag = 1;
    int size = sizeof(a)/sizeof(a[0]);
    

    printf("\nEnter array: ");
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i = 0;i<5/2;i++)
    {
        if(a[i]!=a[size-i-1])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
    {
        printf("Palindrome array");
    }
    else
    {
        printf("Not a palindrome array");
    }
}
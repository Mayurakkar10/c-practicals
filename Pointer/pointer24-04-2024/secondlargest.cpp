#include<stdio.h>
int main()
{
    int a[100];
    int size = sizeof(a)/sizeof(a[0]);
    
    printf("\nEnter size: ");
    scanf("%d",&size);
    printf("\nEnter array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }



    //first sort the array asending order
    for(int i = 0;i<size;i++)
    {
       for(int j = (i+1);j<size;j++)
       {
           if(a[i]>a[j])
           {
               int temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
       }
    }
    
    
    //print  second largest value
    printf("second largest = %d",a[size-2]);

    return 0;
}
//program to reverse array
#include<stdio.h>
int main()
{
    int a[5];
    int size = sizeof(a)/sizeof(a[0]);
    printf("\nEnter array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }


    //reverse logic
    // for(int i= 0,j=4;i<3;i++,j--)
    // {
    //    int temp=a[i];
    //    a[i] = a[j];
    //    a[j] = temp;
    // }

    for(int i= 0;i<3;i++)
    {
        for(int j= 4;j<3;j--)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }


   //display array
   for (int i = 0; i < 5; i++)
   {
      printf("%d ",a[i]);
   }
    return 0;
}
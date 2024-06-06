#include<stdio.h>
int main()
{
    int a[5],i,j,index;
    int size=sizeof(a)/sizeof(a[0]);
    printf("Enter the array values:\n");
    for(i=0;i<5;i++)
    {
         scanf("%d",&a[i]); 
    }
    printf("Enter the index:\n");
    scanf("%d",&index);

   for(i=index;i<size;i++) 
   {
        a[i]=a[i+1];
   }
   size--;
   printf("Display after remove element:\n");
   for(i=0;i<size;i++)
   {
       printf("%d\t",a[i]);
   }

}
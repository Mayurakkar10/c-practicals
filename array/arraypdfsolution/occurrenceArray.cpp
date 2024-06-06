#include<stdio.h>
int main()
{
  int a[10] = {10,20,30,10,20,50,30,10,30,10};

  // for(int i = 0;i<10;i++)
  // {
  //   for(int j = (i+1);j<10;j++)
  //   {
  //     if(a[i]>a[j])
  //     {
  //       int temp = a[i];
  //       a[i] = a[j];
  //       a[j] = temp;
  //     }
  //   }
  // }
  
  printf("\nDisplay array\n");
  for(int i = 0;i<10;i++)
  {
     printf("%d ",a[i]);
  }
  printf("\n");
  for(int i = 0;i<10;i++)
  {
    int count = 1;
    for(int j = i+1;j<10;j++)
    {
      if(a[i] ==a[j])
      {
        count++;
        a[j]=-1;
      }
    }
    if(a[i]==-1)
    {
      continue;
    }
    
    printf("count of %d is  %d\n",a[i],count);

  }

  return 0;
}
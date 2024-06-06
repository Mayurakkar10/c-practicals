#include<stdio.h>
int main()
{
  int a[5] = {1,2,3,4,5};
  int b[5] = {6,7,8,9,10};

  int size1 = sizeof(a)/sizeof(a[0]);
  int size2 = sizeof(b)/sizeof(b[0]);
  int merged[size1+size2];

  for(int i = 0;i<size1;i++)
  {
     merged[i] = a[i];
  }

  for(int i = 0;i<size2;i++)
  {
    merged[size1+i] = b[i];
  }

  for(int i  = 0;i<(size1+size2);i++)
  {
     printf("%d\t",merged[i]);
  }
  
  return 0;
}
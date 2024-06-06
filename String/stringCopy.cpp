//Copy string 1 into string2 without using inbuilt function
#include<stdio.h>
int main()
{
  char str1[10];
  char str2[10];

  int length1 = 0,length2 = 0,i,j;
  printf("\nEnter str1: ");
  gets(str1);
  printf("\nEnter str2: ");
  gets(str2);
  i=0;
  while(str1[i]!='\0')
  {
     length1++;
     i++;
  }
  i=0;
  while (str2[i]!='\0')
  {
    length2++;
    i++;
  }
  
  for(int i= 0;i<length2;i++)
  {
     str2[i]=str1[i];
  }

  printf("\nString2: %s",str2);

 return 0;
}
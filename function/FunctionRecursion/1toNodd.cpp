//print 1toN odd numbers using function recursion
#include<stdio.h>
int i= 1;
int main()
{
    int limit;
    void onetoNodd(int);
    printf("\nEnter limit: ");
    scanf("%d",&limit);
   
    onetoNodd(limit);
    return 0;
} 
void onetoNodd(int limit)
{
    
   if(i<=limit)
   {
      if(i%2!=0)
      {
         printf("%d ",i);

      }
      i++;
      onetoNodd(limit);
   }   
   else
   {
    printf("\nEND");
   }
}
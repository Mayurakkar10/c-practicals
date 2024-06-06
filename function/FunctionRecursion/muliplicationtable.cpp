//program to print multiplication table of number using function recursion
#include<stdio.h>
int count = 0;
int main()
{
    int num;
    void table(int);
    printf("\nEnter a num: \n");
    scanf("%d",&num);
    table(num);
    return 0;
}
void table(int x)
{
   if(count<10)
   {
    ++count;
    printf("%d ",count*x);
   }
    table(x);
}
//program to find all factors of number
#include<stdio.h>
int main()
{
    int num,i=1;

    printf("\nEnter number: ");
    scanf("%d",&num);
    
    while(i<=num)
    {
       if(num%i==0)
       {
          printf("%d\t",i);
       }
       i++;
    }
    return 0;

}
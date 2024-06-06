#include<stdio.h>
int main()
{
    int base,index;
    void power(int,int);//function declaration
    printf("\nEnter base and index: ");
    scanf("%d%d",&base,&index);
    power(base,index);

    return 0;
}
void power(int base,int index){
   int p = 1;
   for(int i= 1;i<=index;i++)
   {
      p = p*base;
   }
   printf("power = %d",p);
}
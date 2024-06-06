#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,sum=0,count = 0;
    printf("\nEnter num: ");
    scanf("%d",&num);

    int temp = num;
    int onum =num;

    while(temp!=0)
    {
        temp = temp/10;
        ++count;
    }
    printf("count = %d",count);
    while(num!=0)
    {
        rem = num%10;
        num = num/10;
        sum= sum+pow(rem,count);
    }
    printf("sum = %d \n num = %d",sum,onum);
    if(sum ==onum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not a armstrong number");
    }
    return 0;
}
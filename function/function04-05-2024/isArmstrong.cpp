#include<stdio.h>
int main()
{
    int num;
    void isArmstrong(int);
    printf("\nEnter a number: ");
    scanf("%d",&num);
    isArmstrong(num);
    return 0;
}
void isArmstrong(int num)
{
    int temp = num;
    int count = 0;
    while(temp!=0)
    {
        temp = temp/10;
        ++count;
    }
    temp = num;

    int sum=0;
    while(temp!=0)
    {
        int rem= temp%10,i=1,p=1;
        while(i<=count)
        {
            p = p*rem;
            i++;
        }
        sum = sum+p;
        temp = temp/10;
    }

     if(num==sum)
     {
        printf("Armstrong Number");
     }
     else
     {
        printf("Not a Armstrong Number");
     }
}
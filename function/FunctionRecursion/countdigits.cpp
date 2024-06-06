#include<stdio.h>
int count=0;
int main()
{
    int num;
    void countDigits(int);
    printf("\nEnter a number: ");
    scanf("%d",&num);
    
    countDigits(num);
    return 0;
}
void countDigits(int num)
{
    if(num!=0)
    {
        num = num/10;
        ++count;
        countDigits(num);
    }
    else
    {
        printf("Digit count = %d",count);
    }

}


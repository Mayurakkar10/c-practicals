//callAdd()function
#include<stdio.h>
int main()
{
    int a,b;
    void calAdd(int,int);
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    calAdd(a,b);

}
void calAdd(int a,int b)
{
    printf("Addition is: %d",a+b);
}

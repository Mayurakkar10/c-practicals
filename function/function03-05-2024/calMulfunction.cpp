//callMul()function
#include<stdio.h>
int main()
{
    int a,b;
    void calMul(int,int);
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    calMul(a,b);

}
void calMul(int a,int b)
{
    printf("Multiplication is: %d",a*b);
}

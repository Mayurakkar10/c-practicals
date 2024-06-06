//callDiv()function
#include<stdio.h>
int main()
{
    int a,b;
    void calDiv(int,int);
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    calDiv(a,b);

}
void calDiv(int a,int b)
{
    printf("Division is: %d",a/b);
}

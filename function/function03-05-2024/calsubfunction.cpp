//calSub()function
#include<stdio.h>
int main()
{
    int a,b;
    void calSub(int,int);
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    calSub(a,b);

}
void calSub(int a,int b)
{
    printf("Substraction is: %d",a-b);
}

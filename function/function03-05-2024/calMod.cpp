//calModfunction
#include<stdio.h>
int main()
{
    int a,b;
    void calMod(int,int);
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    calMod(a,b);

}
void calMod(int a,int b)
{
    printf("Modulus is: %d",a%b);
}

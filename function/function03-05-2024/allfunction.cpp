//calSub()function
#include<stdio.h>
int main()
{
    int a,b,choice;
    void calAdd(int,int);
    void calSub(int,int);
    void calMul(int,int);
    void calDiv(int,int);
    void calMod(int,int);
    printf("\nFor opertion select choice\n1.Additon\n2.Substraction\n3.Multiplication\n4.Division\n5.Modulus\nEnter choice: ");
    scanf("%d",&choice);
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    switch (choice)
    {
    case 1: calAdd(a,b);
            break;
    case 2: calSub(a,b);
            break;
    case 3: calMul(a,b);
            break;
    case 4: calDiv(a,b);
            break;
    case 5: calMod(a,b);
            break;
    default:
        break;
    }
   

}
void calAdd(int a,int b)
{
    printf("Addition is: %d",a+b);
}
void calSub(int a,int b)
{
    printf("Substraction is: %d",a-b);
}
void calMul(int a,int b)
{
    printf("Multiplication is: %d",a*b);
}
void calDiv(int a,int b)
{
    printf("Division is: %d",a/b);
}
void calMod(int a,int b)
{
    printf("Modulus is: %d",a%b);
}

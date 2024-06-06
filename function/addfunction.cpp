//add function
#include<stdio.h>
int main()
{
    int a,b;
    void add(int,int);//function declaration
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    add(a,b);//function calling

}

//function definition
void add(int a,int b){
    printf("Sum = %d",a+b);
}
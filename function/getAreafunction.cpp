#include<stdio.h>
int main()
{
    float radius;
    float getArea(float);
    printf("\nEnter radius: ");
    scanf("%f",&radius);
    float area = getArea(radius);
    printf("The area of Circle is: %f",area);
    return 0;
}
float getArea(float radius)
{
    return 3.14*radius*radius;
}
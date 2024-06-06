// allAreaFunction
#include <stdio.h>
int main()
{
    int height, width, length, breadth, base, choice;
    float radius;
    const float pi = 3.14;
    void calAreaOfCircle(float);
    void calAreaOfRectangle(int, int);
    void calAreaOfTriangle(int, int);
    void calAreaOfQuagrilateral(int, int);
    void calAreaOfCircumference(float);
    printf("\nFor Area select choice\n1.Area Of Circle\n2.Area of Triangle\n3.Area of Quadrilateral\n4.Area of Circumference\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nEnter radius: ");
        scanf("%f", &radius);
        calAreaOfCircle(radius);
        break;
    case 2:
        printf("\nEnter length: ");
        scanf("%d", &length);
        printf("\nEnter width: ");
        scanf("%d", &width);
        calAreaOfRectangle(length, width);
        break;
    case 3:
        printf("\nEnter Base and Height: ");
        scanf("%d%d", &base, &height);
        calAreaOfTriangle(base, height);
    case 4:
        break;
    case 5:
        printf("\nEnter Radius: ");
        scanf("%f", &radius);
        calAreaOfCircumference(radius);
    default:
        break;
    }
    return 0;
}
void calAreaOfCircle(float radius)
{
    float pi = 3.14;
    float area = pi * radius * radius;
    printf("Area of Circle = %f", area);
}

void calAreaOfRectangle(int length, int width)
{
    int area = length * width;
    printf("Area of Rectangel is : %d", area);
}

void calAreaOfTriangle(int base, int height)
{
    int area = 0.5 * base * height;
    printf("Area of Triangle is: %d", area);
}

// void calAreaOfQuagrilateral(int, int)

void calAreaOfCircumference(float radius)
{
    float pi = 3.14;
    float area = 2 * pi * radius;
    printf("Circumference = %f", area);
}

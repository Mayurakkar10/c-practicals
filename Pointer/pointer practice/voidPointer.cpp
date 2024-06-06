//void pointer we can use any type of pointer as per the datatype
#include<stdio.h>
int main()
{
    void *ptr;
    int a = 300;
    ptr = (int*)&a;
    printf("%d",*(int*)ptr);

    float f = 14.26;
    ptr = (float*)&f;
    printf("\n%.2f",*(float*)ptr);
    return 0;
}
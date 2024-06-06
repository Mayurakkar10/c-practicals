#include<stdio.h>
union student1 {
    int rno;
    char name[10];
};

struct student2
{
    int rno;
    char name[10];
};


int main()
{
    union student1 s1;
    struct student2 s2;
    char name1[10];
    printf("\nsize of union is: %d",sizeof(union student1));
    printf("\nsize of struct is: %d",sizeof(struct student2));
    printf("sizeofint %d",sizeof(int));
    printf("sizeofchar = %d",sizeof(name1));
    printf("sizeofchar %d",sizeof(char));
    return 0;
}
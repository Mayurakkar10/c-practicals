#include<stdio.h>

int main()
{
    struct emp{
        int id;
        char name[20];
    }emp1;

    printf("%d",sizeof(emp));

    printf("\nEnter id of emp: ");
    scanf("%d",&emp1.id);

    printf("id = %d",emp1.id);
    return 0;
}
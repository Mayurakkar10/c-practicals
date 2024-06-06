//struct with function by call by reference
#include<stdio.h>
struct emp
{
    int id;
    char name[10];
};
void show(struct emp*);
int main()
{
    struct emp e;
    printf("\nEnter id name of employee: ");
    scanf("%d %s",&e.id,&e.name);
    show(&e);
    printf("\n%d%s",e.id,e.name);
}

void show(struct emp *m){
    m[0].id = 100;
    printf("emoloyee data:\n%d %s",m[0].id,m[0].name);
}
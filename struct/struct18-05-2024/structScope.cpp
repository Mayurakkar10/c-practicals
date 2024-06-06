#include<stdio.h>
struct emp
{
    int id;
    char name[10];
};
void show(struct emp);
int main()
{
    struct emp e;
    printf("\nEnter id name of employee: ");
    scanf("%d %s",&e.id,&e.name);
    show(e);
}

void show(struct emp m){
    printf("emoloyee data:\n%d %s",m.id,m.name);
}
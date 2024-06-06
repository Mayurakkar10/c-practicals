//structure array in function as a parameter
#include<stdio.h>
struct emp
{
    int id;
    char name[10];
};
void show(struct emp*);
int main()
{
    int i;
    struct emp e[5];
    for(int i= 0;i<5;i++)
    {
     printf("\nEnter id name of employee: ");
     scanf("%d %s",&e[i].id,&e[i].name);
    }
    show(e);
    printf("\nIn main ");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d %s",e[i].id,e[i].name);
    }
}

void show(struct emp *m){
    printf("\nemployee data: ");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d %s",m[i].id,m[i].name);
        m[i].id = 0;
    }

}
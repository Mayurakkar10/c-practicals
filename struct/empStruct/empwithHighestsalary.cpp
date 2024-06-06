#include<stdio.h>
#include<stdlib.h>
struct emp{
    int id,sal;
    char name[10];
};
int size;
void highestSalary(struct emp*);
int main()
{
    struct emp *e;
    printf("\nEnter size: ");
    scanf("%d",&size);
    e = (struct emp*)malloc(sizeof(struct emp)*size);
    for(int i= 0;i<size;i++)
    {
        printf("\nEnter id,name,salary of employee %d: ",i+1);
        scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].sal);
    }
    highestSalary(e);

    free(e);
   return 0;
}
void highestSalary(struct emp *e)
{
    
    int max = e[0].sal;
    int index = 0;
    for(int i= 0;i<size;i++)
    {
        if(max<e[i].sal)
        {
            max = e[i].sal;
            index = i;
        }
    }
    printf("\nEmployee with highest salary");
    printf("\n%d %s %d",e[index].id,e[index].name,e[index].sal);
}
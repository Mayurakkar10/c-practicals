#include<stdio.h>
#include<stdlib.h>
struct emp
{
    int id,sal;
    char name[10];
};

int main()
{
    struct emp *e;
    int size;

    printf("\nEnter number of employees: ");
    scanf("%d",&size);
     
    e = (struct emp*)malloc(sizeof(struct emp)*size);
    for(int i= 0;i<size;i++)
    {
        printf("\nEnter id,name,salary of employee: ");
        scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].sal);
    }
    
    //display
    printf("\nDisplay Employee record:");
    for(int i= 0;i<size;i++)
    {
        
        printf("\n%d %s %d",e[i].id,e[i].name,e[i].sal);
    }
    
    return 0;
}
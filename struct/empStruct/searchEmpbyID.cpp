#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int id, sal;
    char name[10];
};
int size,sid,flag =0; 
void searchbyID(struct emp*);
int main()
{
    struct emp *e;
    printf("\nEnter size: ");
    scanf("%d", &size);
    e = (struct emp *)malloc(sizeof(struct emp) * size);

    // input employee record
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter id,name,salary of employee: ");
        scanf("%d %s %d", &e[i].id, &e[i].name, &e[i].sal);
    }

    // display record
    printf("\nDisplay Employee record");
    for (int i = 0; i < size; i++)
    {
        printf("\n%d\t%s\t%d", e[i].id, e[i].name, e[i].sal);
    }


    //search by ID logic
    searchbyID(e);
    return 0;
}

void searchbyID(struct emp *e)
{ 
    printf("\nEnter search ID: ");
    scanf("%d",&sid);
    for(int i=0;i<size;i++)
    {
        if(e[i].id==sid)
        {
            printf("\nEmployee with ID: %d found",sid);
            printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
            flag = 1;
        }
    }
    if(flag==0)
    {
        printf("\nEmployee with ID: %d not found",sid);
    }
}
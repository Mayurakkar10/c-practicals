#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct emp
{
    int id, sal;
    char name[10];
};
int size;
void updateEmp1(struct emp*);
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
    updateEmp1(e);
    return 0;
}

void updateEmp1(struct emp *e)
{
    int sid,nid,nsal;
    char nname[10];
    printf("\nEnter sid: ");
    scanf("%d",&sid);
    printf("\nEnter new employee id,name,salary: ");
    scanf("%d%s%d",&nid,&nname,&nsal);
    for(int i= 0;i<5;i++)
    {
        if(e[i].id == sid)
        {
            e[i].id = nid;
            e[i].sal = nsal;
            strcpy(e[i].name,nname);
        }
    }

    //display
    for(int i= 0;i<size;i++)
    {
        printf("\n%d%s%d",e[i].id,e[i].name,e[i].sal);
    }
}
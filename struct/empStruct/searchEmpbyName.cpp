#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct emp
{
    int id, sal;
    char name[10];
};
void searchbyname(struct emp*);
int size,flag =0;
char sname[10];

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


    //call serachbyname function
    searchbyname(e);
    return 0;
}

void searchbyname(struct emp *e)
{
    printf("\nEnter name to search: ");
    scanf("%s",&sname);
    for(int i=0;i<size;i++)
    {
        if(strcmp(e[i].name,sname)==0)
        {
            printf("\nEmployee with Name: %s found",sname);
            printf("\n%d\t%s\t%d",e[i].id,e[i].name,e[i].sal);
            flag = 1;
        }
    }
    if(flag==0)
    {
        printf("\nEmployee with Name: %s not found",sname);
    }
}
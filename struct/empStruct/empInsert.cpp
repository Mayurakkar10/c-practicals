#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp{
    int id,sal;
    char name[10];
};
int size;
void insertEmp(struct emp*);
int main()
{
    struct emp *e;
    printf("\nEnter size: ");
    scanf("%d",&size);
    e = (struct emp*)malloc(sizeof(struct emp)*size+1);
    for(int i= 0;i<size;i++)
    {
        printf("\nEnter id,name,salary of employee %d: ",i+1);
        scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].sal);
    }
    
    insertEmp(e);

    free(e);
   return 0;
}
void insertEmp(struct emp *e)
{
    int sid,nid,nsal;
    char nname[10];
    printf("\nEnter at which id to insert employee record: ");
    scanf("%d",&sid);
    printf("\nEnter new id,name,salary of employee: ");
    scanf("%d%s%d",&nid,&nname,&nsal);
    for(int i= size-1;i>=sid;i--)
    {
         e[i+1] = e[i];
    }
    e[sid].id = nid;
    strcpy(e[sid].name,nname);
    e[sid].sal = nsal;
   

    for(int i= 0;i<size+1;i++)
    {
        printf("\n%d %s %d",e[i].id,e[i].name,e[i].sal);
    }
}
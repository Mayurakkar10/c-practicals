//Delete employee details by search email
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp{
    int id,sal;
    char name[10];
    char email[10];
};
int size,i,count = 0;
void deleteEmployeeById(struct emp*);
void deleteEmployeeByName(struct emp*);
void deleteEmployeeByEmail(struct emp*);
int main()
{
    struct emp *e;
    printf("\nEnter size: ");
    scanf("%d",&size);

    e = (struct emp*)malloc(sizeof(struct emp)*size);
    for(i= 0;i<size;i++)
    {
        printf("\nEnter employee id,name,salary,email: ");
        scanf("\n%d%s%d%s",&e[i].id,&e[i].name,&e[i].sal,&e[i].email);
    }
    int choice;
    printf("\n1.Delete by ID\n2.Delete by name\n3.Delete by email");
    printf("\nEnter choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
         deleteEmployeeById(e);
        break;
    case 2:
         deleteEmployeeByName(e);
         break;
    case 3:
         deleteEmployeeByEmail(e);
         break;
    default:
        printf("\nEnter valid choice ");
        break;
    }
    return 0;
}
void deleteEmployeeById(struct emp *e)
{
    int sid;
    printf("\nEnter id to Delete: ");
    scanf("%d",&sid);
    for(i= 0;i<size;i++)
    {
        if(e[i].id == sid)
        {
            count++;
            for(int j = i;j<5;j++)
            {
                e[j] = e[j+1];
            }
        }
    }
    for(i=0;i<size-count;i++)
    {
         printf("\n%d %s %d %s",e[i].id,e[i].name,e[i].sal,e[i].email);
    }
}
void deleteEmployeeByName(struct emp *e)
{
    char sname[10];
    printf("\nEnter name to Delete: ");
    scanf("%s",&sname);
    for(i= 0;i<size;i++)
    {
        if(strcmp(e[i].name,sname)==0)
        {
            count++;
            for(int j = i;j<5;j++)
            {
                e[j] = e[j+1];
            }
        }
    }
    for(i=0;i<size-count;i++)
    {
         printf("\n%d %s %d %s",e[i].id,e[i].name,e[i].sal,e[i].email);
    }
}
void deleteEmployeeByEmail(struct emp *e)
{
    char semail[10];
    printf("\nEnter email to Delete: ");
    scanf("%s",&semail);
    for(i= 0;i<size;i++)
    {
        if(strcmp(e[i].email,semail)==0)
        {
            count++;
            for(int j = i;j<5;j++)
            {
                e[j] = e[j+1];
            }
        }
    }
    for(i=0;i<size-count;i++)
    {
         printf("\n%d %s %d %s",e[i].id,e[i].name,e[i].sal,e[i].email);
    }
}

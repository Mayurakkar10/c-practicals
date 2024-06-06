#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int size;
struct emp
{
    int id, sal;
    char name[10];
    char email[10];
};

void search(struct emp *e)
{
    int choice, flag = 0;
    ;
    printf("\n1.Search by id: ");
    printf("\n2.Search by name: ");
    printf("\n3.Search by email: ");
    printf("\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        int sid;
        printf("\nEnter sid: ");
        scanf("%d", &sid);
        for (int i = 0; i < size; i++)
        {
            if (e[i].id == sid)
            {
                printf("Employee with given id found: ");
                printf("id: %d, name: %s, email: %s, salary: %d", e[i].id, e[i].name, e[i].email, e[i].sal);
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            printf("\nEmployee with given id not found");
        }
        break;
    case 2:
        char sname[10];
        printf("\nEnter sname: ");
        scanf("%s", &sname);

        for (int i = 0; i < size; i++)
        {
            if (strcmp(e[i].name, sname) == 0)
            {
                printf("\nEmployee with given name found: ");
                printf("id: %d, name: %s, email: %s, salary: %d", e[i].id, e[i].name, e[i].email, e[i].sal);
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            printf("\nEmployee with given name not found");
        }
        break;
    case 3:
         char uemail[10];
         printf("\nEnter email to search: ");
         scanf("%s",&uemail);

         for(int i= 0;i<size;i++)
         {
            if(strcmp(e[i].email,uemail)==0)
            {
                printf("\nEmployee with given email found: ");
                printf("id: %d, name: %s, email: %s, salary: %d", e[i].id, e[i].name, e[i].email, e[i].sal);
                flag = 1;
                break;
            }

         }
         if(!flag)
         {
            printf("\nEmployee with given email not found");
         }
         break;
    default:
        break;
    }
}

void update(struct emp *e)
{
   int sid,nid,nsal;
   char nname[10];
   char nemail[10];
   printf("\nEnter id of employee to update: ");
   scanf("%d",&sid);
   for(int i=0;i<size;i++)
   {
    if(sid==e[i].id)
    {
        printf("\nEnter new employee id,name,email,salary: ");
        scanf("%d %s %s %d",&nid,&nname,&nemail,&nsal); 
        e[i].id = nid;
        strcpy(e[i].name,nname);
        strcpy(e[i].email,nemail);
        e[i].sal = nsal;
    }
   }
}


void deleterecord(struct emp *e)
{
    int sid;
    printf("\nEnter id to delete: ");
    scanf("%d",&sid);
    for(int i= 0;i<size;i++)
    {
        if(sid == e[i].id)
        {

        }
    }
}
int main()
{
    struct emp *e;
    int x;
    printf("\nEnter size: ");
    scanf("%d", &size);
    int choice;
    e = (struct emp *)malloc(sizeof(struct emp) * size);
    do
    {
        printf("\n1.Add employee record: ");
        printf("\n2.Display empolyee record: ");
        printf("\n3.search record: ");
        printf("\n4.Update record");
        printf("\n5.Delete record: ");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                printf("\nEnter id,name,email,salary of employee: ");
                scanf("%d%s%s%d", &e[i].id, &e[i].name, &e[i].email, &e[i].sal);
            }
            break;
        case 2:
            for (int i = 0; i < size; i++)
            {
                printf("id: %d name: %s email: %s salary: %d\n", e[i].id, e[i].name, e[i].email, e[i].sal);
            }
            break;
        case 3:
            search(e);
            break;
        case 4:
            update(e);
            break;

        default:
            break;
        }

        printf("\nDo you want to continue(yes-1/no-0): ");
        scanf("%d", &x);
    } while (x != 0);
    printf("Thank You!");
    return 0;
}
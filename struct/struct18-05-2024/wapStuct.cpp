#include <stdio.h>
#include <string.h>
struct employee
{
    int id, sal;
    char name[10];
    char email[10];
};

int main()
{
    struct employee e[10];
    int choice, flag = 0;
    char unemail[10];
    char sname[10];
    char nname[10];
    char nemail[10];
    char semail[10];
    int sid, nid, nsal, count = 0;
    do
    {
        printf("\n1.Add employee Details");
        printf("\n2.Display data: ");
        printf("\n3.search employee by id then employee is found or not");
        printf("\n4.Update employee details by name");
        printf("\n5.Delete employee details by email");
        printf("\n6.display list count of the employee in company.");
        printf("\n7.display list the employee in the ascending order of employee salary");
        printf("\n8.display employee details in highest salary");
        printf("\n9.display the employee details in minimum salary is 10000 to maximum salary is 60000");
        printf("\n10.exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                printf("\nEnter id,name,salary,email of employee%d: ", i + 1);
                scanf("%d%s%d%s", &e[i].id, &e[i].name, &e[i].sal, &e[i].email);
            }
            break;
        case 2:
            printf("\nDisplay record: ");
            for (int i = 0; i < 3; i++)
            {
                printf("\n%d %s %d %s", e[i].id, e[i].name, e[i].sal, e[i].email);
            }
            break;
        case 3:
            printf("\nEnter sid: ");
            scanf("%d", &sid);
            for (int i = 0; i < 3; i++)
            {
                if (e[i].id == sid)
                {
                    printf("\nEmployee found\n %d %s %d", e[i].id, e[i].name, e[i].sal, e[i].email);
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                printf("\nEmployee not found\n");
            }
            break;
        case 4:
            printf("\nEnter name to search: ");
            scanf("%s", &sname);
            printf("\nEnter id,name,salary,email of employee data to update: ");
            scanf("%d%s%d%s", &nid, &nname, &nsal, &nemail);
            for (int i = 0; i < 3; i++)
            {
                if (strcmp(e[i].name, sname) == 0)
                {
                    e[i].id = nid;
                    e[i].sal = nsal;
                    strcpy(e[i].name, nname);
                    strcpy(e[i].email, nemail);
                }
            }

            break;
        case 5:
            printf("\nEnter email to search: ");
            scanf("%s", &semail);
            for (int i = 0; i < 3-count; i++)
            {
                if (strcmp(e[i].email, semail) == 0)
                {
                    count++;
                    for (int j = (i + 1); j < 3; j++)
                    {
                        e[j] = e[j + 1];
                    }
                }
            }

            //display
            for(int i= 0;i<5-count;i++)
            {
         printf("\n%d %s %d %s",e[i].id,e[i].name,e[i].sal,e[i].email);
            }
        
           break;
        default:
            break;
        }

    } while (choice <= 11);

    return 0;
}
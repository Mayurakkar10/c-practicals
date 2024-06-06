//program to find whether a given id is present or not
#include<stdio.h>
#include<string.h>
struct employee
{
    int id,sal;
    char name[10];
};

int main()
{
    struct employee emp[3];
    char sname[10];
    int flag=0,i;
    
    //input record
    for(int i= 0;i<3;i++)
    {
        printf("\nEnter id,name,salary of employee%d:",i+1);
        scanf("%d%s%d",&emp[i].id,&emp[i].name,&emp[i].sal);
    }

    //input  search id
    printf("\nEnter name to search: ");
    scanf("%s",&sname);

    //logic for search
    for (i = 0; i < 3; i++)
    {
        if(strcmp(sname,emp[i].name)==0)
        {
            printf("\n%d\n%s\n%d",emp[i].id,emp[i].name,emp[i].sal);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("\nname not found");
    }
    
    return 0;
}
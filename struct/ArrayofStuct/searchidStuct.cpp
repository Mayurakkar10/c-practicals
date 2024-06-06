//program to find whether a given id is present or not
#include<stdio.h>
struct employee
{
    int id,sal;
    char name[10];
};

int main()
{
    struct employee emp[3];
    int sid,flag=0,i;
    
    //input record
    for(int i= 0;i<3;i++)
    {
        printf("\nEnter id,name,salary of employee%d:",i+1);
        scanf("%d%s%d",&emp[i].id,&emp[i].name,&emp[i].sal);
    }

    //input  search id
    printf("\nEnter search id: ");
    scanf("%d",&sid);

    //logic for search
    for (i = 0; i < 3; i++)
    {
        if(emp[i].id==sid)
        {
            printf("\n%d\n%s\n%d",emp[i].id,emp[i].name,emp[i].sal);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("\nid not found");
    }
    
    return 0;
}
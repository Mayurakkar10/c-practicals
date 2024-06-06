#include<stdio.h>
#include<string.h>

//declare struct
struct emp{
    int id,sal;
    char name[10];
};

int main()
{
    struct emp e[5];
    int sid;
    char uname[10];

    //input record
    for(int i= 0;i<5;i++)
    {
        printf("\nEnter id,name,salary of emp%d",i+1);
        scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].sal);
    }
    
    //input sid,uname from user
    printf("\nEnter sid: ");
    scanf("%d",&sid);
    printf("\nEnter uname: ");
    scanf("%s",&uname);


    //logic for update
    for(int i= 0;i<5;i++)
    {
       if(e[i].id == sid)
       {
           strcpy(e[i].name,uname);
       }
    }
    

    printf("\nDisplay record: ");
    for(int i= 0;i<5;i++)
    {
        printf("id: %d\nname: %s\nsalary: %d",e[i].id,e[i].name,e[i].sal);
    }


    return 0;
}
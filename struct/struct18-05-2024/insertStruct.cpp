//insert employee at any index 
#include<stdio.h>
#include<string.h>
struct emp{
    int id,sal;
    char name[10];
};
int main()
{
    struct emp e[6];

    //input record
    for(int i= 0;i<5;i++)
    {
        printf("\nEnter id,name,salary of emp%d: ",i+1);
        scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].sal);
    }



    //display record
    printf("\ndisplay record: ");
    for(int i= 0;i<5;i++)
    {
        printf("\n%d %s %d",e[i].id,e[i].name,e[i].sal);
    }



    //input given index and data to insert;
    int index;
    printf("\nEnter index: ");
    scanf("%d",&index);
    int nid,nsal;
    char nname[10];
    printf("\nEnter new employee id,name,salary: ");
    scanf("%d%s%d",&nid,&nname,&nsal);

    //logic
    for(int i =4;i>=index;i--)
    {
        e[i+1] = e[i];
    }
    e[index].id = nid;
    e[index].sal = nsal;
    strcpy(e[index].name,nname);
    
    
    //display record
    printf("\ndisplay record: ");
    for(int i= 0;i<6;i++)
    {
        printf("\n%d %s %d",e[i].id,e[i].name,e[i].sal);
    }

    return 0;
}
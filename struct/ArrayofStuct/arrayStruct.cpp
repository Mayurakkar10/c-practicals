//Array of Structure
#include<stdio.h>
struct Employee
{
   int id,sal;
   char name[10];
};

int main()
{
    struct Employee emp[3];
    int i;
    for(int i = 0;i<3;i++)
    {
        printf("\nEnter id,name,salarry of Employee%d: ",i+1);
        scanf("%d %s %d",&emp[i].id,&emp[i].name,&emp[i].sal);
    }

    printf("\nDisplay record:");
    for(int i =0;i<3;i++)
    {
        printf("\nid: %d\nname = %s\nsalary = %d",emp[i].id,emp[i].name,emp[i].sal);
    }
    return 0;
}
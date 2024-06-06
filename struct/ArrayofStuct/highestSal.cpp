//program to store 3 employee record and display name of employee having highest salary
#include<stdio.h>
struct employee
{
   int id,sal;
   char name[10];
};
int main()
{
    struct employee emp[3];
    
    for(int i= 0;i<3;i++)
    {
      printf("\nEnter id,name,salary of Employee%d:",i+1);
      scanf("%d%s%d",&emp[i].id,&emp[i].name,&emp[i].sal);
    }
    int max,index;
    for(int i= 0;i<3;i++)
    {
        max = emp[0].sal;
        if(emp[i].sal>max)
        {
            max = emp[i].sal;
            index = i;
        }
    }

    printf("%s has the highest salary",emp[index].name);
    return 0;
}
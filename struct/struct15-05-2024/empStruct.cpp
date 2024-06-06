#include<stdio.h>
int main()
{
    struct emp
    {
       int id;
       char name[10];
       int sal;
    }emp1,emp2;

    printf("\n%d ",sizeof(emp));
    printf("\nEnter id of emp1: ");
    scanf("%d",&emp1.id);
    printf("\nEnter name of emp1: ");
    scanf("%s",&emp1.name);
    printf("\nEnter salary of emp1: ");
    scanf("%d",&emp1.sal);

    printf("\nEnter id of emp2: ");
    scanf("%d",&emp2.id);
    printf("\nEnter name of emp2: ");
    scanf("%s",&emp2.name);
    printf("\nEnter salary of emp2: ");
    scanf("%d",&emp2.sal);

    printf("\nDisplay Data\n");
    printf("\nid = %d\nname = %s\nsalary = %d",emp1.id,emp1.name,emp1.sal);
    printf("\nid = %d\nname = %s\nsalary = %d",emp2.id,emp2.name,emp2.sal);


    if(emp1.sal>emp2.sal)
    {
        printf("\nemp1 has highest salary");
    }
    else if(emp1.sal<emp2.sal)
    {
        printf("\nemp2 has highest salary");
    }
    else
    {
        printf("\nBoth have same salary");
    }

  
    
    return 0;
}
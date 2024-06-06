#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp{
    int id,sal;
    char name[10];
};
int size;
void sortbyid(struct emp*);
void sortbyname(struct emp*);
void sortbysalary(struct emp*);
int main()
{
    struct emp *e;
    printf("\nEnter size: ");
    scanf("%d",&size);
    e = (struct emp*)malloc(sizeof(struct emp)*size);
    for(int i= 0;i<size;i++)
    {
        printf("\nEnter id,name,salary of employee %d: ",i+1);
        scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].sal);
    }
    int choice;
    printf("\n1.Sort by ID\n2.Sort by name\n3.Sort by Salary");
    printf("\nEnter choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
         sortbyid(e);
        break;
    case 2:
         sortbyname(e);
         break;
    case 3: 
         sortbysalary(e);
         break;
    default:
        break;
    }

    free(e);
   return 0;
}
void sortbyid(struct emp *e)
{
     for(int i= 0;i<size;i++)
     {
        for(int j = i+1;j<size;j++)
        {
            if(e[i].id>e[j].id)
            {
                struct emp temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
     }

     for(int i= 0;i<size;i++)
     {
        printf("\n%d %s %d",e[i].id,e[i].name,e[i].sal);
     }
}
void sortbyname(struct emp *e)
{
     for(int i= 0;i<size;i++)
     {
        for(int j = i+1;j<size;j++)
        {
            if(strcmp(e[i].name,e[j].name)>0)
            {
                struct emp temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
     }

     for(int i= 0;i<size;i++)
     {
        printf("\n%d %s %d",e[i].id,e[i].name,e[i].sal);
     }
}
void sortbysalary(struct emp *e)
{
     for(int i= 0;i<size;i++)
     {
        for(int j = i+1;j<size;j++)
        {
            if(e[i].sal>e[j].sal)
            {
                struct emp temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
     }

     for(int i= 0;i<size;i++)
     {
        printf("\n%d %s %d",e[i].id,e[i].name,e[i].sal);
     }
}

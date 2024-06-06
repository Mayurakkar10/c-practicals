//Delete employee details by search id
#include<stdio.h>
#include<stdlib.h>
struct emp{
    int id,sal;
    char name[10];
    char email[10];
};
int size,i,count = 0;
void deleteEmployee(struct emp*);
int main()
{
    struct emp *e;
    printf("\nEnter size: ");
    scanf("%d",&size);

    e = (struct emp*)malloc(sizeof(struct emp)*size);
    for(i= 0;i<size;i++)
    {
        printf("\nEnter employee id,name,salary,email: ");
        scanf("\n%d%s%d%s",&e[i].id,&e[i].name,&e[i].sal,&e[i].email);
    }

    deleteEmployee(e);
    return 0;
}
void deleteEmployee(struct emp *e)
{
    char sid;
    printf("\nEnter sid: ");
    scanf("%d",&sid);
    for(i= 0;i<size;i++)
    {
        if(e[i].id == sid)
        {
            count++;
            for(int j = i;j<5;j++)
            {
                e[j] = e[j+1];
            }
        }
    }
    for(i=0;i<size-count;i++)
    {
         printf("\n%d %s %d %s",e[i].id,e[i].name,e[i].sal,e[i].email);
    }
}

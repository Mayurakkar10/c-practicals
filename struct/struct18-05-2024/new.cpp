#include<stdio.h>
#include<string.h>
struct employee
{
    int id,sal;
    char name[10];
    char email[10];
};

int main()
{
    struct employee e[5];
    char sname[10];
              char uname[10];
              char nemail[10];
              int nid,nsal;
              printf("\nEnter name to search in record: ");
              scanf("%s",&sname);
              printf("\nEnter id,name,salary,email to update: ");
              scanf("%d%s%d%s",&nid,&uname,&nsal,&nemail);

             printf("%s",e[1].name);
             printf("%s",e[1].email);
            //   for(int i= 0;i<5;i++)
            //   {
            //       if(strcmp(sname,e[i].name)==0)
            //       {
            //           e[i].id = nid;
            //           e[i].sal = nsal;
            //           e[i].name = uname;
            //           e[i].email = nemail;
            //       }
            //   }
    return 0;
}
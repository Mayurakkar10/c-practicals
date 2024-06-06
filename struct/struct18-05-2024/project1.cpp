#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct emp
{
  int id, sal;
  char name[10];
};

void addRecord(struct emp*);
void displayRecord(struct emp*);
void searchRecord(struct emp*);
int size, count = 0;
int main()
{
  int choice, x, i;
  struct emp *e;
  printf("\nEnter employee numbers: ");
  scanf("%d", &size);

  e = (struct emp *)malloc(sizeof(struct emp) * size);
  do
  {
    printf("\n1.Add record\n2.Display Record\n3.Search Record");
    printf("\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      addRecord(e);
      break;
    case 2:
      displayRecord(e);
      break;
    case 3:
      searchRecord(e);
      break;
    default:
      printf("invalid choice");
      break;
    }

    printf("\nDo you want to continue(y-1/n-0)");
    scanf("%d", &x);
  } while (x == 1);
  printf("\n Thank You");
  return 0;
}

void addRecord(struct emp *s)
{
  if (count == size)
  {
    printf("\nlimit exceed..");
  }
  else
  {
    printf("\nEnter id,name,salary of employee: ");
    scanf("%d%s%d", &s[count].id, &s[count].name, &s[count].sal);
    count++;
  }
}

void displayRecord(struct emp *s)
{
  if (count == 0)
    printf("\nEmpty..no record");
  else
  {
    printf("\nRecord is \n");
    for (int i = 0; i < count; i++)
    {
      printf("\n%d\t%s\t%d", s[i].id, s[i].name, s[i].sal);
    }
  }
}

void searchRecord(struct emp *s)
{
  int schoice, sid,flag = 0;
  char sname[10];
  printf("\n1.Search by ID: ");
  printf("\n2.Search by Name: ");
  printf("\nEnter choice: ");
  scanf("%d", &schoice);


  switch (schoice)
  {
  case 1:
    printf("\nEnter ID to search: ");
    scanf("%d",&sid);
    for (int i = 0; i < size; i++)
    {
      if (sid == s[i].id)
      {
        printf("\nEmployee found with ID: %d",sid);
        printf("\n%d %s %d", s[i].id, s[i].name, s[i].sal);
        flag = 1;
      }
    }
    if(flag==0)
    {
      printf("\nEmployee with ID:%d not found",sid);
    }
    break;
  case 2:
      printf("\nEnter name to search: ");
      scanf("%s",&sname);
      for(int i= 0;i<size;i++)
      {
          if(strcmp(s[i].name,sname) == 0)
          {
             printf("Employee with name: %s found");
             printf("\n%d\t%s\t%d",s[i].id,s[i].name,s[i].sal);
             flag = 1;
          }
      }
      if(flag == 0)
      {
         printf("Employee with name: %s not found",sname);
      }
      break;
  default:
    printf("\nInvalid choice: ");
    break;
  }
}
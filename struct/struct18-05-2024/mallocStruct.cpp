#include<stdio.h>
#include<stdlib.h>
struct emp{
   int id;
   char name[10];
};
int main()
{
    int size;
    printf("\nEnter size: ");
    scanf("%d",&size);
    
    struct emp *pointer = (struct emp*)malloc(sizeof(struct emp)*size);
    
    for(int i= 0;i<size;i++)
    {
        printf("\nEnter data of emp%d: ",i+1);
        scanf("%d%s",&pointer[i].id,&pointer[i].name);
    }
    
    //display
    for(int i= 0;i<size;i++)
    {
        printf("\n%d %s",pointer[i].id,pointer[i].name);
    }
    return 0;
}
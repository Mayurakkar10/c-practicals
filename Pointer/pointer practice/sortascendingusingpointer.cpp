#include<stdio.h>
int main()
{
    int a[5];
    int *p;
    p = a;
    printf("\nEnter array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&p[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for(int j= (i+1);j<5;j++)
        {
            if(p[i]>p[j])
            {
                int temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    
    printf("\nDisplay array after sorting: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*p);
        p++;
    }
    

    return 0;
}
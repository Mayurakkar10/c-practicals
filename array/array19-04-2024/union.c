#include<stdio.h>
int main()
{
    int a[5],b[5],i,j;
    int m=sizeof(a)/sizeof(a[0]);
     int n=sizeof(b)/sizeof(b[0]);
    printf("Enter the  first array values;\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the second array values:\n");
    for(j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }

    
    for(int i = 0;i<5;i++)
    {
        for(int j = (i+1);i<5;i++)
        {
            if(b[i]>b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j]  = temp;
            }
        }
    }
    




    i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            printf("%d ",a[i++]);
        }
        else if(b[j]<a[i])
        {
            printf("%d ",b[j++]);
        }
        else
        {
             printf("%d ",b[j++]);
             i++;
        }
    }
    while(i<m)
    {
        printf("%d ",a[i++]);
    }
    while(j<n)
    {
        printf("%d ",b[j++]);
    }
    return 0;
}
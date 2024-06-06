#include<stdio.h>
int main()
{
    int a[3],b[3];

    int size1 = sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);

    int c[size1+size2];

    printf("\nEnter first array: ");
    for(int i = 0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter second array: ");
    for(int i = 0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }


    for(int i = 0;i<3;i++)
    {
        for(int j = (i+1);j<3;j++)
        {
            if(a[i]<a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            if(b[i]<b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    
    printf("\nDisplay first array: \n");
    for(int i = 0;i<3;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nDisplay second array: \n");
    for(int i = 0;i<3;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");

   
    
     //logic
     for (int i = 0; i < 3; i++) {
        c[i*2] = a[i];
        c[i*2 + 1] = b[i];
    }

    printf("\nDisplay mergerd array: \n");
    for(int i = 0;i<6;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
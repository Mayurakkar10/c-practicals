#include<stdio.h>
int main()
{
    int n,mcount = 0,flag = 0,a[n];
    printf("\nEnter arraylimit");
    scanf("%d",&n);
    printf("\nEnter array: ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     
    for(int i = 0;i<7;i++)
    {
        for( int j = 0;j<7;j++)
        {
            if(a[i] == a[j])
            {
                   mcount = mcount +1;
            }
        }
       if(mcount > 7/2)
       {
          printf("%d of count = %d",a[i],mcount);
          flag = 1;
          break;
        }
    }

    if(flag)
    {
        printf("majority element found");
    }
    else
    {
        printf("Majority element not found;");
    }
    return 0;
}
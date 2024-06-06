#include<stdio.h>
int main()
{
    int a[5] = {10,10,30,20,20};
     int i,j,count;

     for(i = 0;i<5;i++)
     {
        count = 1;
        for ( j = i+1; j < 5; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j] = -1;
            }
        }
        if(a[i]==-1)
        {
            continue;
        }
         
        printf("count of %d is %d\n",a[i],count);
     }

    return 0;
}
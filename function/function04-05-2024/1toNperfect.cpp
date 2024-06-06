//print 1toN perfect number using function
#include<stdio.h>
int main()
{
    int limit;
    void onetoNperfect(int);
    printf("\nEnter limit: ");
    scanf("%d",&limit);
    onetoNperfect(limit);
    return 0;
}

void onetoNperfect(int limit)
{
    for(int num = 1;num<=limit;num++)
    {
        int sum=0;
        for(int j = 1;j<num;j++)
        {
            while(num%j==0)
            {
                sum =sum+j;
                j++;
            }
           
        }
        if(sum==num)
        {
          printf("%d ",num);
        }  
    }
}
#include<stdio.h>
int main()
{
    int limit;
    void onetoNarmstrong(int);
    printf("\nEnter limit: ");
    scanf("%d",&limit);
    onetoNarmstrong(limit);
    return 0;
}
void onetoNarmstrong(int limit)
{
    for(int i = 1;i<=limit;i++)
    {
        int count =0;
        int temp = i;


        //first find the digit count
        while(temp!=0)
        {
            temp = temp/10;
            ++count;
        }

        temp =i;
        int sum = 0;
        while(temp!=0)
        {
            int rem=temp%10;
            int j = 1,p = 1;
            while(j<=count)
            {
                p = p*rem;
                j++;
            }
            sum = sum+p;
            temp = temp/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}
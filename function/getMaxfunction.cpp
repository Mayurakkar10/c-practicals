//getMaxAreaFunction
#include<stdio.h>
int main()
{
    int a[5];
    int getMax(int []);
    printf("\nEnter values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    int Maxvalue = getMax(a);
    printf("MaxValue = %d",Maxvalue);
    return 0;
}

int getMax(int a[])
{
    int max=a[0];
    for (int i = 0; i < 5; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    return max;
}
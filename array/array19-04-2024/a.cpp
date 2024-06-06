#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);

    
    for(int i = 0;i<6;i++)
    {
        a[i+1] = 6;
        printf("a[i+1] = %d a[i] = %d\n",a[i+1],a[i]+1);
    }
    
    return 0;
}
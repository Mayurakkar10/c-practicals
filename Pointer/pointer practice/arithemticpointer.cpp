#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    p = &a;
    q = &b;
    printf("\nEnter values of a and b: ");
    scanf("%d%d",&a,&b);

    printf("\n%d+%d=%d",*p,*q,*p+*q);
    printf("\n%d-%d=%d",*p,*q,*p-*q);
    printf("\n%d*%d=%d",*p,*q,*p**q);
    printf("\n%d/%d=%d",*p,*q,*p/(*q));
    // printf("\n%d /% %d=%d",*p,*q,*p%*q);

    
    return 0;
}
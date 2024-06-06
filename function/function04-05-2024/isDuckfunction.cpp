#include <stdio.h>
int main()
{
    int num;
    int isDuckNum(int);
    printf("\nEnter a num: ");
    scanf("%d", &num);
    isDuckNum(num);
    return 0;
}
int isDuckNum(int num)
{
    int rem;
    int flag = 0;
    while (num != 0)
    {
        rem = num % 10;
        if (num == 0)
        num = num / 10;
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("Duck Number");
    }
    else
    {
        printf("Not a Duck Number");
    }
}
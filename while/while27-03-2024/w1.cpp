// check number is prime or not
#include <stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("Enter num: ");
    scanf("%d", &num);
    i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (!flag)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a Prime number");
    }
    return 0;
}
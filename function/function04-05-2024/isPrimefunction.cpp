#include <stdio.h>
int main()
{
    int num;
    int isPrimeNum(int);
    printf("\nEnter a number: ");
    scanf("%d", &num);
    isPrimeNum(num);
    return 0;
}

int isPrimeNum(int num)
{
    int i = 2, flag = 0;
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
        printf("Prime Number");
    }
    else
    {
        printf("Not a prime Number");
    }
}

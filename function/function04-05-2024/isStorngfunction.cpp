#include <stdio.h>
int main()
{
    int num;
    void isStrong(int);
    printf("\nEnter num: ");
    scanf("%d", &num);
    isStrong(num);
    return 0;
}

void isStrong(int num)
{
    int sum = 0, rem, i, fact, temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        i = 1, fact = 1;
        while (i <= rem)
        {
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (sum == num)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }
}
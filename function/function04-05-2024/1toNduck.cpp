#include <stdio.h>
int main()
{
    int limit;
    void onetoNduck(int);
    printf("\nEnter limit: ");
    scanf("%d", &limit);
    onetoNduck(limit);
    return 0;
}
void onetoNduck(int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        int flag = 0;
        int temp = i;
        while (temp != 0)
        {
            int rem = temp % 10;
            temp = temp / 10;
            if (rem == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            printf("%d ", i);
        }
    }
}
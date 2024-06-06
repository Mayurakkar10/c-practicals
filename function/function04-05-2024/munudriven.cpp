#include <stdio.h>
int main()
{
    int num, choice, rev, palidrome, base, index, power, sum;
    int reverse(int);
    int isPalindrome(int);
    int powerOfNum(int, int);
    int sumOfdigits(int);
    printf("\nFor operation Select choice\n1.Reverse Number\n2.Palindrome Number\n3.find the power of number\n4.find the sum of digits\nEnter your choice: ");
    scanf("%d", &choice);
    printf("\nEnter a number: ");
    scanf("%d", &num);

    switch (choice)
    {
    case 1:
        rev = reverse(num);
        printf("\nReverse = %d", rev);
        break;
    case 2:
        palidrome = isPalindrome(num);
        break;
    case 3:
        power = powerOfNum(num, index);
        printf("Power of %d is %d", num, power);
        break;
    case 4:
        sum = sumOfdigits(num);
        printf("sum of digits of %d = %d", num, sum);
        break;
    default: 
        break;
    }

    return 0;
}

int reverse(int num)
{
    int rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }
    return rev;
}

int isPalindrome(int num)
{
    int rev = 0, rem;
    int temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        temp = temp / 10;
        rev = rev * 10 + rem;
    }

    if (num == rev)
    {
        return printf("\nNumber is palidrome");
    }
    else
    {
        return printf("\nNumber is not Palidrome");
    }
}

int powerOfNum(int num, int index)
{
    printf("\nEnter index: ");
    scanf("%d", &index);
    int p = 1;
    for (int i = 1; i <= index; i++)
    {
        p = p * num;
    }
    return p;
}

int sumOfdigits(int num)
{
    int rem, sum = 0;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }
    return sum;
}


//atoz alphabet using function recursion
#include<stdio.h>
int i=97;
int main()
{
    int limit = 122;
    void atozAlphabet(int);
    atozAlphabet(limit);
    return 0;
}
void atozAlphabet(int limit)
{
     if(i<=limit)
     {
        printf("%c ",i);
        i++;
        atozAlphabet(limit);
     }
     else
     {
        printf("\nEND");
     }
}

#include <stdio.h>
int main()
{
    struct bookstoreStruct
    {
        char title[10];
        char author[10];
        int price;
    } b1, b2, b3;

    printf("\nEnter Details of Book1: ");
    printf("title: ");
    scanf("%s", &b1.title);
    printf("author: ");
    scanf("%s", &b1.author);
    printf("price: ");
    scanf("%d", &b1.price);

    printf("\nEnter Details of Book2: ");
    printf("title: ");
    scanf("%s", &b2.title);
    printf("author: ");
    scanf("%s", &b2.author);
    printf("price: ");
    scanf("%d", &b2.price);

    printf("\nEnter Details of Book3: ");
    printf("title: ");
    scanf("%s", &b3.title);
    printf("author: ");
    scanf("%s", &b3.author);
    printf("price: ");
    scanf("%d", &b3.price);

    printf("\nDetails of Book1: ");
    printf("\ntitle: %s", b1.title);
    printf("\nauthor: %s", b1.author);
    printf("\nprice: %d\n", b1.price);

    printf("\nDetails of Book2: ");
    printf("\ntitle: %s", b2.title);
    printf("\nauthor: %s", b2.author);
    printf("\nprice: %d\n", b2.price);

    printf("\nDetails of Book3: ");
    printf("\ntitle: %s", b3.title);
    printf("\nauthor: %s", b3.author);
    printf("\nprice: %d", b3.price);

    if (b1.price > b2.price && b1.price > b3.price)
    {
        printf("\nbook1 is expensive");
    }
    else if (b2.price > b2.price && b2.price > b3.price)
    {
        printf("\nbook2 is expensive");
    }
    else if (b3.price > b1.price && b3.price > b2.price)
    {
        printf("\nbook3 is expensive");
    }
    else
    {
        printf("\nAll are having same price");
    }

    return 0;
}
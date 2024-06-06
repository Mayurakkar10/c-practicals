#include <stdio.h>
struct emp
{
    int id;
    char name[10];
};
void addRecord(struct emp a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter record of employee%d: ", i + 1);
        scanf("%d%s", &a[i].id, &a[i].name);
    }
};
void displayRecord(struct emp d, int size)
{
    printf("\nDisplay record: ");
    for (int i = 0; i < size; i++)
    {
        printf("\n%d %s", d[i].id, d[i].name);
    }
}

int main()
{
    int size, count = 0;
    printf("\nEnter size: ");
    scanf("%d", &size);
    int choice;
    struct emp e[size];

    do
    {
        printf("\n1.Add Record");
        printf("\n2.Display Record");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addRecord(e, size);
            break;
        case 2:
            displayRecord(e, size);
            break;
        default:
            break;
        }
    } while (x == 1);

    return 0;
}

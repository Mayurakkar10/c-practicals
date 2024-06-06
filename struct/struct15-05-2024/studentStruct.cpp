#include<stdio.h>
int main()
{
    struct Student
    {
        char name[10];
        int age;
        int total_marks;
        int subjectNum;

    }s1,s2;
     
    int avg;
    printf("\nEnter details of First Student: ");
    printf("\nName:  ");
    scanf("%s",&s1.name);
    printf("\nAge: ");
    scanf("%d",&s1.age);
    printf("\nTotal Marks: ");
    scanf("%d",&s1.total_marks);
    printf("\nNumber of subject: ");
    scanf("%d",&s1.subjectNum);


    printf("\nEnter details of Second Student: ");
    printf("\nName:  ");
    scanf("%s",&s2.name);
    printf("\nAge: ");
    scanf("%d",&s2.age);
    printf("\nTotal Marks: ");
    scanf("%d",&s2.total_marks);
    printf("\nNumber of subject: ");
    scanf("%d",&s2.subjectNum);

    
    printf("\nData of First Student: \n");
    printf("\nName: %s",s1.name);
    printf("\nAge: %d",s1.age);
    printf("\nTotal Marks: %d",s1.total_marks);
    avg = (s1.total_marks/s1.subjectNum);
    printf("\nAverage of Total Marks: %d\n",avg);


    printf("\nData of Second Student: ");
    printf("\nName: %s",s2.name);
    printf("\nAge: %d",s2.age);
    printf("\nTotal Marks: %d",s2.total_marks);
    avg = (s2.total_marks/s2.subjectNum);
    printf("\nAverage of Total Marks: %d",avg);
    return 0;
}
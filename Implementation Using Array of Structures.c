#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    int age;
    float cgpa;
};

int main()
{
    struct Student s[1000];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Age: ");
        scanf("%d", &s[i].age);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\nStudent Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID: %d", s[i].id);
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d", s[i].age);
        printf("\nCGPA: %.2f\n", s[i].cgpa);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    float cgpa;
    int roll;
};
struct teacher
{
    char name[100];
    int term;
    int age;
};
struct staff
{
    char name[100];
    int term;
    int age;
};
int main()
{
    int s, t, st;
    printf("enter the number of students,teachers,staff respectively in your college;\n");
    scanf("%d %d %d", &s, &t, &st);
    struct student a[s];
    struct teacher b[t];
    struct staff c[st];
    printf("enter the names of the students:\n");
    for (int i = 0; i <= s; i++)
    {
        fgets(a[i].name, 100, stdin);
    }
    printf("enter the cgpa of the students:\n");
    for (int j = 0; j < s; j++)
    {
        scanf("%f", &a[j].cgpa);
    }
    printf("enter the roll of students:\n");
    for (int k = 0; k < s; k++)
    {
        scanf("%d", &a[k].roll);
    }
    printf("the names of students are :\n");
    for (int l = 1; l <= s; l++)
    {
        printf("student %d name is ", l);
        printf("%s", a[l].name);
        printf("\n");
    }
    printf("the cgpa of the students  are:\n");
    for (int m = 0; m < s; m++)
    {
        printf("student %d cgpa is ", m + 1);
        printf("%f", a[m].cgpa);
        printf("\n");
    }
    printf("the roll of students are :\n");
    for (int n = 0; n < s; n++)
    {
        printf("student %d roll is ", n + 1);
        printf("%d", a[n].roll);
        printf("\n");
    }
    return 0;
}
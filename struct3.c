// array of structures
#include <stdio.h>
#include <string.h>
struct student
{
    float cgpa;
    int roll_no;
    char name[100];
};
int main()
{
    struct student ece[100];
    ece[0].cgpa = 1.1;
    ece[0].roll_no = 1;
    strcpy(ece[0].name, "Mr. Hudda");
    printf("%f", ece[0].cgpa);
    printf("\n%s", ece[0].name);

    return 0;
}
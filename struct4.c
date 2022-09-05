// initializing structures,pointers to structures
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
    struct student s1 = {9.71, 1, "abhi"};
    printf("%f\n", s1.cgpa);

    struct student *ptr = &s1;
    printf("%d\n", (*ptr).roll_no);
    printf("%s\n",ptr->name);
    return 0;
}
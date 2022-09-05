// passing structure to function
#include <stdio.h>
#include <string.h>
struct student
{
    float cgpa;
    int roll_no;
    char name[100];
};
void printInfo(struct student s1);
int main()
{
    struct student s1 = {9.71, 1, "abhi sri"};
    printInfo(s1);
    return 0;
}
void printInfo(struct student s1)
{
    printf("%f\n", s1.cgpa);
    printf("%d\n", s1.roll_no);
    printf("%s\n", s1.name);
}

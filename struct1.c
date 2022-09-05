//structures
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
    struct student s1;
    s1.cgpa = 9.71;
    s1.roll_no = 2;
    strcpy(s1.name, "Abhinav Sri");
    printf("student's cgpa=%f\n", s1.cgpa);
    printf("student's roll no=%d\n", s1.roll_no);
    printf("student's name=%s\n", s1.name);
    return 0;
}
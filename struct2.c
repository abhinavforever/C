//wap to store the data of 3 students
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
    struct student s1, s2, s3;
    s1.cgpa = 1.1;
    s1.roll_no = 1;
    strcpy(s1.name, "John");
    s2.cgpa = 2.2;
    s2.roll_no = 2;
    strcpy(s2.name, "Mitnick");
    s3.cgpa = 3.3;
    s3.roll_no = 3;
    strcpy(s3.name, "Aston Villa");
    printf("%f\n",s1.cgpa);
    printf("%d\n",s2.roll_no);
    printf("%s\n",s3.name);

    return 0;
}
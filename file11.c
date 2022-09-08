// make a program to input student information from a user and enter it to a file
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("2test.txt", "w");
    char name[100];
    int age;
    float cgpa;
    printf("enter your name:");
    fgets(name, 100, stdin);
    printf("enter your age:");
    scanf("%d", &age);
    printf("enter your cgpa:");
    scanf("%f", &cgpa);
    fprintf(fptr, "your name: %s\n", name);
    fprintf(fptr, "your age: %d\n", age);
    fprintf(fptr, "your cgpa is : %f\n", cgpa);
    fclose(fptr);
    return 0;
}
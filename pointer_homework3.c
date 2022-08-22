//wap in c to print all the letters in english alphabet using a pointer

#include <stdio.h>

int main()
{
    char i;
    for (int i = 'a'; i <= 'z'; i++)
    {
        int* ptr=&i;
        printf("%c\t", *(ptr));
    }
    printf("\n\n");
    for (int i = 'A'; i <= 'Z'; i++)
    {
        int* ptr=&i;
        printf("%c\t", *(ptr));
    }
    return 0;
}
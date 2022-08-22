#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    ptr = ptr + 2;
    printf("%u\n", ptr);
    char star='*';
    char * potr=&star;
    printf("%u\n",potr);
    potr=potr+2;
    printf("%u\n",potr);

    return 0;
}
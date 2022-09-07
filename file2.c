#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("1test.txt", "w");
    fclose(fptr);
    return 0;
}
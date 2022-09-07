// reading from a file once
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("0test.txt", "r");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("Character=%c\n", ch);
    fclose(fptr);
    return 0;
}
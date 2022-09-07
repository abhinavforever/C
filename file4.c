// reading from a file(0test.txt) multiple times
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("0test.txt", "r");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character= %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character= %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character= %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character= %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character= %c\n", ch);
    fclose(fptr);
    return 0;
}
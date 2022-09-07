// reading from a file(1test.txt)

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("1test.txt", "r");
    int n;
    fscanf(fptr, "%d", &n);
    printf("number= %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number= %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number= %d\n", n);
    fclose(fptr);
    return 0;
}
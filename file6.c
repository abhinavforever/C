// writing to a file(0test.txt)
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("0test.txt", "a");
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');
    fclose(fptr);
    return 0;
}
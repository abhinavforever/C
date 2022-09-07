#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("0test.txt", "r");
    if (fptr == NULL)
    {
        printf("file doesn't exist");
    }
    else
    {
        printf("file exists");
        fclose(fptr);
    }

    return 0;
}
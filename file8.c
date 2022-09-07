//fputc
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("0test.txt","w");
    putc('M',fptr);
    putc('A',fptr);
    putc('N',fptr);
    putc('G',fptr);
    putc('O',fptr);
    fclose(fptr);
    return 0;
}
//fgetc
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("0test.txt","r");
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    fclose(fptr);
    return 0;
}
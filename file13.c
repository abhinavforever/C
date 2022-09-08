// 2 numbers-a and b are written in a file .Wap to replace them with their sum
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("4sum.txt", "r");
    int n, sum = 0;
    fscanf(fptr, "%d", &n);
    sum = sum + n;
    fscanf(fptr, "%d", &n);
    sum = sum + n;
    printf("sum= %d\n", sum);
    fclose(fptr);
    fptr = fopen("4sum.txt", "w");
    fprintf(fptr, "%d", sum);
    fclose(fptr);

    return 0;
}
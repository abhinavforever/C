// wap to write all the odd numbers from 1 to n in a file
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("3odd.txt", "w");
    int n;
    printf("enter the number till where you want to print the odd numbers:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if ((i % 2) != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }
    fclose(fptr);
    FILE *fptrr;
    fptrr=fopen("3odd.txt","r");
    printf("the odd numbers written in the file are :n");
    return 0;
}
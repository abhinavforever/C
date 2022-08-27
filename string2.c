//demonstration of fgets and puts
#include <stdio.h>

int main()
{
    int n = 100;
    char str[n];
    printf("enter string;\n");
    fgets(str, n, stdin);
    puts(str);
    return 0;
}
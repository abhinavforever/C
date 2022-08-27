//write a function named slice ,which takes a string and returns a sliced string from index n to m
#include <stdio.h>
void slice(char str[], int n, int m);
int main()
{
    char str[100];
    printf("enter string:\n");
    fgets(str,100,stdin);
    int n, m;
    printf("enter the value of n and m(starting and ending position of slice):\n");
    scanf("%d %d", &n, &m);
    slice(str, n, m);
    return 0;
}
void slice(char str[], int n, int m)
{
    for (int i = n; i <= m; i++)
    {
        printf("%c", str[i]);
    }
}
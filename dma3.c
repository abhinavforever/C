//free() function
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the number of memory locations you want:\n");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", ptr[j]);
    }
    free(ptr);
    ptr = (int *)calloc(2, sizeof(int));
    for (int j = 0; j < 2; j++)
    {
        printf("%d\n", ptr[j]);
    }
    return 0;
}
//wap to allocate memory of size n , where n is entered by the user
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the number of memory locations you want:\n");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    printf("enter the data:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &ptr[i]);
    }
    printf("the data entered is :\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", ptr[j]);
    }

    return 0;
}
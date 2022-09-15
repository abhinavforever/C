// allocate memory to store first 5 odd numbers ,then reallocate it to store first 6 even numbers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    int k = 0;
    for (int i = 0; i <= 20; i++)
    {
        if ((i % 2) != 0)
        {
            ptr[k] = i;
            k++;
        }
        if (k == 5)
        {
            break;
        }
    }
    printf("first 5 odd numbers are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    ptr = realloc(ptr, 6);
    k = 0;
    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            ptr[k] = i;
            k++;
        }
        if (k == 6)
        {
            break;
        }
    }
    printf("the first 6 even numbers are :\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}
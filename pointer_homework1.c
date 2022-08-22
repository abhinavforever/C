//wap in c to find the maximum no. btw 2 no.'s using pointers
#include <stdio.h>

int main()
{
    int a, b, max;
    printf("enter two no.'s:\n");
    scanf("%d %d", &a, &b);
    int *ptr1 = &a, *ptr2 = &b;
    if ((*ptr1) > (*ptr2))
    {
        max = (*ptr1);
    }
    else
    {
        max = (*ptr2);
    }
    printf("maximum no.=%d\n", max);

    return 0;
}
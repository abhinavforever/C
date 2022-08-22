// #include <stdio.h>

// int main()
// {
//     int arr[10];
//     printf("enter values in array:\n");
//     for (int i = 0; i < 10; ++i)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int j = 0; j < 5; j++)
//     {
//         int t;
//         t = *(&arr[j]);
//         *(&arr[j]) = *(&arr[9 - j]);
//         *(&arr[9 - j]) = t;
//     }
//     printf("final array:\n");
//     for (int k = 0; k < 10; k++)
//     {
//         printf("%d\n", arr[k]);
//     }
//     return 0;
// }

//wap in c to print the elements of an array in reverse order 
#include <stdio.h>

int main()
{
    int n;
    printf("enter no. of elements in array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter values in array:\n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < (n / 2); j++)
    {
        int t;
        t = *(&arr[j]);
        *(&arr[j]) = *(&arr[n - 1 - j]);
        *(&arr[n - 1 - j]) = t;
    }
    printf("final array:\n");
    for (int k = 0; k < n; k++)
    {
        printf("%d\n", arr[k]);
    }
    return 0;
}

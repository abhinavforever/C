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

// wap in c to print the elements of an array in reverse order
#include <stdio.h>
void func(int *arr, int n);

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
    func(arr, n);
    // for (int j = 0; j < (n / 2); j++)
    // {
    //     int t;
    //     t = *(&arr[j]);
    //     *(&arr[j]) = *(&arr[n - 1 - j]);
    //     *(&arr[n - 1 - j]) = t;
    // }
    // printf("final array:\n");
    // for (int k = 0; k < n; k++)
    // {
    //     printf("%d\n", arr[k]);
    // }
    return 0;
}
void func(int *arr, int n)
{
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
}

////////////////////////////

// #include <stdio.h>
// void reverse(int arr[], int n);
// void prnt(int arr[], int n);
// int main()
// {
//     int n;
//     printf("enter no. of elements :\n");
//     scanf("%d", &n);
//     int arr[n];
//     printf("enter elements:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     reverse(arr, n);
//     prnt(arr, n);

//     return 0;
// }
// void reverse(int arr[], int n)
// {
//     for (int j = 0; j < n / 2; j++)
//     {
//         int firstvalue = arr[j];
//         int secondvalue = arr[n - 1 - j];
//         arr[j] = secondvalue;
//         arr[n - j - 1] = firstvalue;
//     }
// }
// void prnt(int arr[], int n)
// {
//     printf("array in reverse:\n");
//     for (int k = 0; k < n; k++)
//     {
//         printf("%d\t", arr[k]);
//     }
// }
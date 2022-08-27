//write a function to count the no. of odd numbers in an array

#include <stdio.h>
void func(int *arr, int n);
int main()
{
    int n;
    printf("enter the no. of elements :\n");
    scanf("%d",&n);
    int arr[n];
    func(arr, n);
    // int k=0;
    // for (int i = 0; i < 10; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for (int j = 0; j < 10; j++)
    // {
    //     if (arr[j] % 2 != 0)
    //     {
    //         k++;
    //     }
    // }
    // printf("no. of odd elements in the array=%d\n", k);
    return 0;
}
void func(int *arr, int n)
{
    int k = 0;
    printf("enter array elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 != 0)
        {
            k++;
        }
    }
    printf("no. of odd elements in the array=%d\n", k);
}
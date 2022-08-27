// wap to print the largest number in an array

#include <stdio.h>

int main()
{
    int n;
    printf("enter size of array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }
    printf("the largest no. in the array is %d", max);

    return 0;
}
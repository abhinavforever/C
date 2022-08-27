//wap to store the first n fibonacci numbers
#include <stdio.h>

int main()
{
    int n;
    printf("enter no. of Fibonacci numbers to be stored :\n");
    scanf("%d", &n);
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    printf("first %d numbers of fibonacci series stored in array are:\n", n);
    for (int j = 0; j < n; j++)
    {
        printf("%d\t", arr[j]);
    }
    return 0;
}
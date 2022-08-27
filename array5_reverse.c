#include <stdio.h>
void reverse(int arr[], int n);
void prnt(int arr[], int n);
int main()
{
    int n;
    printf("enter no. of elements :\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr, n);
    prnt(arr, n);

    return 0;
}
void reverse(int arr[], int n)
{
    for (int j = 0; j < n / 2; j++)
    {
        int firstvalue = arr[j];
        int secondvalue = arr[n - 1 - j];
        arr[j] = secondvalue;
        arr[n - j - 1] = firstvalue;
    }
}
void prnt(int arr[], int n)
{
    printf("array in reverse:\n");
    for (int k = 0; k < n; k++)
    {
        printf("%d\t", arr[k]);
    }
}
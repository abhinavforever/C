//In an array of numbers find how many times does a number 'x' occurs
#include <stdio.h>

int main()
{
    int n, num;
    int k=0;
    printf("enter size of array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the number to be counted :\n");
    scanf("%d", &num);
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == num)
        {
            k++;
        }
    }
    printf("no. of times that %d has occurred in the array=%d", num, k);
    return 0;
}//ok
//create a 2d array storing the tables of 2 and 3

#include <stdio.h>

int main()
{
    int n;
    printf("enter the number upto which the table has to be printed:\n");
    scanf("%d", &n);
    int arr[n][2]; // no. of cols=2 since we are storing tables of two numbers ie 2 & 3
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1][0] = (i * 2);
        arr[i - 1][1] = (i * 3);
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d\t%d\n", arr[j][0], arr[j][1]);
    }
    return 0;
}
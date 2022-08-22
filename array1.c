#include <stdio.h>

int main()
{
    float arr[3];
    float fcost[3];
    printf("enter the values of 3 items:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &arr[i]);
    }
    for (int j = 0; j < 3; j++)
    {
        fcost[j]=arr[j]+ ((18.00/100.00) * arr[j]);
    }
    printf("new prices after gst are :\n");
    for (int k = 0; k < 3; k++)
    {
        printf("%f\n", fcost[k]);
    }

    return 0;
}
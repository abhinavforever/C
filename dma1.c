// wap to allocate memory to store 5 prices
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float*)malloc(5 * sizeof(float));
    printf("enter the prices:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f\n", &ptr[i]);
    }
    printf("the prices are :\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%f\n", ptr[j]);
    }
    return 0;
}
// Write a function to calculate the sum,product and average of 2 numbers .Print that average in the main function

#include <stdio.h>
void func(int a, int b, int *c, int *d, int *e);
int main()
{
    int x, y, sum, product, average;
    x = 3, y = 5;
    func(x, y, &sum, &product, &average);
    printf("sum=%d\nproduct=%d\naverage=%d\n", sum, product, average);

    return 0;
}
void func(int a, int b, int *c, int *d, int *e)
{
    (*c) = (a) + (b);
    (*d) = (a) * (b);
    (*e) = (*c) / 2;
}
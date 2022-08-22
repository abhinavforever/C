#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
    int x = 3, y = 5;
    swap(x, y);
    printf("value of x is %d and value of y is %d\n", x, y);
    _swap(&x, &y);
    printf("value of x is %d and value of y is %d \n", x, y);
    return 0;
}
// call by value
void swap(int a, int b)
{
    int t; // temporary variable
    t = a;
    a = b;
    b = t;
    printf("value of a is %d and value of b is %d\n", a, b);
}
// call by reference
void _swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("value at a is %d and value at b is %d\n",*a,*b);
}
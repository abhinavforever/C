// create a structure to store vectors.Then make a function to return sum of two vectors
#include <stdio.h>
typedef struct vector
{
    float x_coordinate;
    float y_coordinate;
} vec;
void calculateSum(vec v1, vec v2, vec sum);
int main()
{
    vec v1 = {2.5, 5.0};
    vec v2 = {3.5, 6.0};
    vec sum = {0};
    calculateSum(v1,v2,sum);
    return 0;
}
void calculateSum(vec v1, vec v2, vec sum)
{
    sum.x_coordinate = v1.x_coordinate + v2.x_coordinate;
    sum.y_coordinate = v1.y_coordinate + v2.y_coordinate;
    printf("sum of x-coordinates is %f\n", sum.x_coordinate);
    printf("sum of y-coordinates is %f\n", sum.y_coordinate);
}
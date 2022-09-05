// create a structure to store complex numbers (use arrow operator)
#include <stdio.h>
struct complex
{
    float real;
    float imaginary;
};
void printing(struct complex *c1, struct complex *c2);
int main()
{
    struct complex c1 = {2.3, 3.4};
    struct complex c2 = {3.3, 4.6};
    printing(&c1, &c2);
    return 0;
}
void printing(struct complex *c1, struct complex *c2)
{
    printf("first complex number is %f + %fi\n", c1->real, c1->imaginary);
    printf("second complex number is %f + %fi\n", c2->real, c2->imaginary);
}
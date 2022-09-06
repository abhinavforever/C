#include <stdio.h>

int main()
{
    int age=22;
    int* ptr= &age;
    int **ptrr=&ptr;
    int _age=*ptr;
    printf("%d\n",_age);
    printf("%d",**ptrr);

    return 0;
}
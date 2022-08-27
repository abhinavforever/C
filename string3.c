// string using pointers
#include <stdio.h>

int main()
{
    char *str = "abhinav srivastava";
    str = "wall street";
    puts(str);
    char str1[] = "abhinav";
    //str1="abhi"; -->gives error because array string can't be re-initialized/modified
    puts(str1);
    return 0;
}
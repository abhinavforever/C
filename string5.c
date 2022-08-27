//take a string input from the user using %c
#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i=0;
    while(ch!='\n')
    {
        scanf("%c",&ch);
        str[i]=ch;
        i++;
    }
   puts(str);
    return 0;
}
// wap that inputs user's name and prints its length
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter your name:\n");
    fgets(str, 100, stdin);
    printf("your name:\n");
    puts(str);
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            len++;
        }
    }
    // len=sizeof(str)/sizeof(char);
    printf("length of your name:%d\n", (len - 1));
    // alternatively:use strlen function to find total no. of characters
    int lenn;
    lenn = strlen(str);
    printf("length=%d", lenn);
    return 0;
}
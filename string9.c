// check if a given character is present in a string or not
#include <stdio.h>
#include <string.h>
void check(char str[], char ch);
int main()
{
    char str[100];
    printf("enter the string:\n");
    fgets(str, 100, stdin);
    char ch;
    printf("enter the character to be checked:\n");
    scanf("%c", &ch);
    check(str, ch);

    return 0;
}
void check(char str[], char ch)
{
    int k = 0;
    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {
        if (str[i] == ch)
        {
            k++;
        }
    }
    if (k != 0)
    {
        printf("%c is present in the string %d times", ch,k);
    }
    else
    {
        printf("%c is not present in the string ", ch);
    }
}
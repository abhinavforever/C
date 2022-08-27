// write a function to count the occurrence of vowels in a string
#include <stdio.h>
#include <string.h>
void count(char str[]);
int main()
{
    char str[100];
    printf("enter the string:\n");
    fgets(str, 100, stdin);
    count(str);
    return 0;
}
void count(char str[])
{
    int k = 0;
    int size=strlen(str);
    for (int j = 0; j<size; j++)
    {
        if (str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U'||str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
        {
            k++;
        }
    }
    printf("the no. of occurrence of vowels = %d", k);
}
// create a string firstName & lastName to store details of user and print all the characters using a loop

#include <stdio.h>
void func(char arr[]);
int main()
{
    char firstName[] = "ABHINAV";
    char lastName[] = "SRIVASTAVA";
    func(firstName);
    func(lastName);
    return 0;
}
void func(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c\t", arr[i]);
    }
    
}
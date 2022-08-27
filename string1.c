// create a string firstName & lastName to store details of user and print all the characters using a loop

#include <stdio.h>

int main()
{
    char firstName[] = "ABHINAV";
    char lastName[] = "SRIVASTAVA";
    int size1 = sizeof(firstName) / sizeof(char);
    int size2 = sizeof(lastName) / sizeof(char);
    for (int i = 0; i < size1; i++)
    {
        printf("%c", firstName[i]);
        if(i!=(size1-1))
        {
            printf("\t");
        }
    }
    for (int j = 0; j < size2; j++)
    {
        printf("%c\t", lastName[j]);
    }
    return 0;
}
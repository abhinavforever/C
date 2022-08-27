//find the salted form of a password entered by the user if the salt is "123" and added at the end
 #include <stdio.h>
#include <string.h>
void salt(char pass[]);
void print(char pass[]);
int main()
{
    char pass[100];
    printf("enter password:\n");
    scanf("%s", pass);
    salt(pass);
    print(pass);
    return 0;
}
void salt(char pass[])
{
    char salt[] = "123";
    strcat(pass, salt);
}
void print(char pass[])
{
    printf("the salted form of password entered by the user is :\n");
    puts(pass);
}
// wap to enter address of 5 people(house no.,block,city,state)

#include <stdio.h>

struct address
{
    int house_no;
    int block;
    char city[100];
    char state[100];
};
void printInfo(struct address p);
int main()
{
    struct address p1 = {1, 1, "Lko", "up"};
    struct address p2 = {2, 2, "nagpur", "maharashtra"};
    struct address p3 = {3, 3, "mumbai", "maharashtra"};
    struct address p4 = {4, 4, "banaras", "up"};
    struct address p5 = {5, 5, "noida", "up"};
    printInfo(p1);
    printInfo(p2);
    printInfo(p3);
    printInfo(p4);
    printInfo(p5);

    return 0;
}
void printInfo(struct address p)
{
    printf("address is %d,%d,%s,%s \n", p.house_no, p.block, p.city, p.state);
}
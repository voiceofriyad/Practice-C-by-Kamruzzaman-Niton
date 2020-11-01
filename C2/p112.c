#include<stdio.h>
void main(void)
{
    int x, y, z;
    x = 10, y = 19, z = 28;

    printf("Less Than (<) operator: \n");
    printf("\t x < y : %d\n", x < y);
    printf("\t y < x : %d\n\n", y < x);

    printf("Less Than Or Equal To (<=) operator: \n");
    printf("\t x <= y : %d\n", x <= y);
    printf("\t y <= x : %d\n\n", y <= x);

    printf("Greater Than (>) operator: \n");
    printf("\t x > y : %d\n", x > y);
    printf("\t y > x : %d\n\n", y > x);

    printf("Greater Than Or Equal To (>=) operator: \n");
    printf("\t x >= y : %d\n", x >= y);
    printf("\t y >= x : %d\n\n", y >= x);

    printf("Equal To (<) operator: \n");
    printf("\t x == y : %d\n", x == y);
    printf("\t y == x : %d\n\n", y == x);

    printf("Not Equal To (<) operator: \n");
    printf("\t x != y : %d\n", x != y);
    printf("\t y != x : %d\n\n", y != x);

}

#include<stdio.h>
int main()
{
    char ch = 'N';
    int x = 1, y = 2, z = 3;

    printf("%d\n", x && y && z);
    printf("%d\n", x < y && y > z);
    printf("%d\n", ('A' <= ch) && (ch <= 'z'));
    printf("%d\n", (x = 0) && (y = 4));

}

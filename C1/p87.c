#include<stdio.h>
void main()
{
    int a = 5, b = 55, c = 555;

    printf("%3d %3d %3d\n", a, b, c);
    printf("%3d %3d %3d", c, b, a);

    printf("\n\n\n");

    printf("%6d %6d %6d\n", a, b, c);
    printf("%6d %6d %-6d", c, b, a);
}

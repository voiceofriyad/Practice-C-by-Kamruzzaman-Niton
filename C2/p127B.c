#include<stdio.h>
void main(void)
{
    int x = 1, y = 2;

    printf("%d %d\n", y, y=x++);
    printf("%d %d\n", ++x, ++y);
}

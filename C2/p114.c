#include<stdio.h>
void main(void)
{
    int i, j, k;
    i = 10, j = 20, k = 30;

    printf("%d\n", i < j);
    printf("%d\n", i+j >= k);
    printf("%d\n", (j+k) > (i+k));
    printf("%d\n", k != 33);
    printf("%d\n", j==50);

}

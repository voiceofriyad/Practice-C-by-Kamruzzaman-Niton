#include<stdio.h>
void main(void)
{
    int count;

    count = 1;
    printf("Using postfix (count--) = %d\n", count--);
    printf("Value after decrement is %d\n\n", count);

    count = 1;
    printf("Using prefix (--count) = %d\n", --count);
    printf("Value after decrement is %d\n\n", count);

}

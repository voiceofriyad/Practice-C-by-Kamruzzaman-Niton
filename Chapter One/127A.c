#include<stdio.h>
void main(void)
{
    int var;

    var = 1;
    printf("Using Postfix (var++) var = %d\n", var++);
    printf("Value After Increment Is: %d\n\n", var);

    var = 1;
    printf("Using Postfix (++var) var = %d\n", ++var);
    printf("Value After Increment Is: %d\n\n", var);

}

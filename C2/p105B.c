#include<stdio.h>
void main(void)
{
    int month, days;

    printf("Enter number of days: ");
    scanf("%d", &days);

    month = days / 30;
    days = days % 30;

    printf("\n Number of month = %d and days =%d.", month, days);

}

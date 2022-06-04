#include <stdio.h>

int main(void)
{
    int a = 5, b = 6;

    printf("Input values of a and b to compare : ");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("a is equal to b\n");
    if (a > b)
        printf("a is greater than b\n");
    if (a < b)
        printf("a is smaller than b\n");
    if (a <= b)
        printf("a is either smaller or equal to b\n");
    if (a >= b)
        printf("a is either greater or equal to b\n");
    if (a != b)
        printf("a is not equal to b\n");

    return 0;
}

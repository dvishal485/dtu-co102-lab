#include <stdio.h>

int main(void){
    int a = 1, b = 0, c = 0;

    printf("Input the values for a, b and c (0 or 1) : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("a && b && c = %d\n", a && b && c);
    printf("a || b || c = %d\n", a || b || c);

    return 0;
}

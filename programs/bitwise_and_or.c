#include <stdio.h>

int main(void){
    int a, b;

    printf("Input the values for a and b : ");
    scanf("%d %d", &a, &b);
    printf("a & b = %d\t(Bitwise AND)\n", a & b);
    printf("a | b = %d\t(Bitwise OR)\n", a | b);

    return 0;
}

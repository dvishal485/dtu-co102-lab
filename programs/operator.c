#include <stdio.h>

int main(void){
    int a, b, c, d;
    printf("Enter two integers : ");
    scanf("%d %d", &a, &b);

    c = a + b;
    printf("Addition \t(%d + %d)\t= %d\n", a, b, c);
    c = a - b;
    printf("Subtraction \t(%d - %d)\t= %d\n", a, b, c);
    c = a * b;
    printf("Multiplication \t(%d * %d)\t= %d\n", a, b, c);
    c = a / b;
    d = a % b;
    printf("Division \t(%d / %d)\n\tQuotient\t= %d\n\tRemainder\t= %d\n", a, b, c, d);

    return 0;
}

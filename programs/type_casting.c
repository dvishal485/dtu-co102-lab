/* This program is written by Vishal Das
(2K21/A8/24) on May 05, 2022 02:30 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(void){
    int a, b, c;
    float d;
    printf("Enter two integers : ");
    scanf("%d %d", &a, &b);

    c = a + b; // Addition Operation
    printf("Addition \t(%d + %d)\t= %d\n", a, b, c);
    c = a - b; // Subtraction Operation
    printf("Subtraction \t(%d - %d)\t= %d\n", a, b, c);
    c = a * b; // Multiplication Operation
    printf("Multiplication \t(%d * %d)\t= %d\n", a, b, c);

    d = a / b; // Division without using typecasting
    printf("Division without using typecasting = \t%f\n", d);

    d = 1.0 * a / b; // Division using implicit typecasting
    printf("Division using implicit typecasting = \t%f\n", d);

    d = (float)(a) / b; // Division using explicit typecasting
    printf("Division using explicit typecasting = \t%f\n", d);

    return 0;
}

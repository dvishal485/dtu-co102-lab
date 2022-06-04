/* This program is written by Vishal Das
(2K21/A8/24) on June 02, 2022 02:30 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(void)
{
    char op;
    int a, b, c;
    printf("Input the expression\t(Example 5 + 2) : ");
    scanf("%d %c %d", &a, &op, &b);
    switch(op){
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
        case 'X':
        case 'x':
            c = a * b;
            break;
        case '/':
            c = a / b;
            break;
    }
    printf("Output of the expression :\t%d %c %d = %d\n", a, op, b, c);
}

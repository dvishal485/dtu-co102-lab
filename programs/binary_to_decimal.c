/* This program is written by Vishal Das
(2K21/A8/24) on June 02, 2022 03:20 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(void){
    int binary, pow = 1, decimal = 0;
    printf("Enter a binary number : ");
    scanf("%d", &binary);
    while (binary != 0){
        decimal += (binary % 10) * pow;
        pow *= 2;
        binary /= 10;
    }
    printf("Decimal number : %d\n", decimal);
}

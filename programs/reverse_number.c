/* This program is written by Vishal Das
(2K21/A8/24) on May 19, 2022 03:10 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(void){
    int n;
    int reversed = 0;

    printf("Input an 5-digit integer : ");
    scanf("%d", &n);

    while (n)
    {
        reversed *= 10;
        reversed += n % 10;
        n = n / 10;
    }

    printf("\nThe reversed number is %d\n", reversed);

    return 0;
}

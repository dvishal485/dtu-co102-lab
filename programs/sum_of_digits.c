/* This program is written by Vishal Das
(2K21/A8/24) on May 19, 2022 02:40 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(void){
    int n;
    int sum = 0;

    printf("Input an 5-digit integer : ");
    scanf("%d", &n);

    while (n)
    {
        sum += n % 10;
        n = n / 10;
    }

    printf("\nThe sum of digits is %d\n", sum);

    return 0;
}

/* This program is written by Vishal Das
(2K21/A8/24) on July 14, 2022 03:40 PM
for Lab File of course CO102
*/

#include<stdio.h>

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("\nFactorial of %d = %ld\n", n, multiplyNumbers(n));
    return 0;
}


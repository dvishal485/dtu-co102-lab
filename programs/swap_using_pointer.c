/* This program is written by Vishal Das
(2K21/A8/24) on July 21, 2022 03:00 PM
for Lab File of course CO102
*/

#include <stdio.h>

void swap(int *x, int *y){
    int temp = *y;
    *y = *x;
    *x = temp;
}

int main(void){
    int a, b;
    printf("Input values of integer a and b : ");
    scanf("%d %d", &a, &b);
    printf("\nBefore Swapping :\na = %d\tb = %d", a, b);
    swap(&a, &b);
    printf("\nAfter Swapping :\na = %d\tb = %d\n", a, b);
    return 0;
}
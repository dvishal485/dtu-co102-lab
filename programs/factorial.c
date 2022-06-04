/* This program is written by Vishal Das
(2K21/A8/24) on May 19, 2022 02:10 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(void){
    long long int factorial=1;
    int n;

    printf("Input an integer : ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
        factorial *= i;

    printf("\nThe factorial of %d is %d", n, factorial);

    return 0;
}

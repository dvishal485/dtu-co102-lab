/* This program is written by Vishal Das
(2K21/A8/24) on May 19, 2022 03:30 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Input an integer : ");
    scanf("%d", &n);

    if (n == 1){
        printf("1 is not a prime number\n", n);
        return 0;
    }else if (n == 2){
        printf("2 is a prime number\n", n);
        return 0;
    }

    for (int factor = 2; factor <= n / 2; factor++)
        if (n % factor == 0){
            printf("%d is not a prime number\n", n);
            return 0;
        }

    printf("%d is a prime number\n", n);

    return 0;
}

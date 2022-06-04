/* This program is written by Vishal Das
(2K21/A8/24) on June 02, 2022 03:00 PM
for Lab File of course CO102
*/

#include <math.h>
#include <stdio.h>

int main(void)
{
    int decimal, binary = 0, i = 0;
    printf("Enter a decimal number : ");
    scanf("%d", &decimal);
    while (decimal != 0)
    {
        binary += decimal % 2 * pow(10, i++);
        decimal /= 2;
    }
    printf("Binary number : %d\n", binary);
}

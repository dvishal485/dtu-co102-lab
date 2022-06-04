/* This program is written by Vishal Das
(2K21/A8/24) on May 05, 2022 02:55 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(void){
    float principal, rate, time_period, simple_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period: ");
    scanf("%f", &time_period);

    simple_interest = (principal * rate * time_period) / 100;

    printf("\nThe simple interest is %f", simple_interest);
    return 0;
}

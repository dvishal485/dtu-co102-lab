/* This program is written by Vishal Das
(2K21/A8/24) on July 07, 2022 03:40 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(){
    char first_string[20];
    char second_string[20];
    printf("Input the first string : ");
    scanf("%s",first_string);
    printf("\nInput the second string : ");
    scanf("%s",second_string);
    int i;
    for(i=0; first_string[i]!='\0'; i++);
    for(int j=0; second_string[j]!='\0'; j++)
    {
        first_string[i]=second_string[j];
        i++;
    }
    first_string[i]='\0';
    printf("\nAfter concatenation, the string would look like: %s\n", first_string);
    return 0;
}

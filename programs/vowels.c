/* This program is written by Vishal Das
(2K21/A8/24) on June 07, 2022 01:30 PM
for Lab File of course CO102
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char string[100];
    int vowel = 0;
    printf("Input your string : ");
    fgets(string, sizeof(string),stdin);
    for(int i = 0 ; i < strlen(string); i++)
    {
        switch(string[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vowel += 1;
        }
    }
    printf("Number of vowels in the given string is %d\n", vowel);
    return 0;
}


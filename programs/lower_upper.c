/* This program is written by Vishal Das
(2K21/A8/24) on July 07, 2022 04:20 PM
for Lab File of course CO102
*/

#include <stdio.h>
#include <string.h>

int main(void){
    char string[100];
    int difference = 'A'-'a';
    printf("Input your string : ");
    fgets(string, sizeof(string),stdin);
    for(int i = 0 ; i < strlen(string); i++){
        if(string[i]>='A'&&string[i]<='Z')
            { string[i] -= difference; }
        else if(string[i]>='a'&&string[i]<='z')
            { string[i] += difference; }
    }
    printf("Case Changed : %s", string);
    return 0;
}

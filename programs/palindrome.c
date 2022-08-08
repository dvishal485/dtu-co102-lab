/* This program is written by Vishal Das
(2K21/A8/24) on July 07, 2022 03:15 PM
for Lab File of course CO102
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int len, temp=0;
    printf("Input a string : ");
    scanf("%s", str);
    len = strlen(str);
    for(int i=0; i < len ; i++){
        if(str[i] != str[len-i-1]){
            temp = 1;
            break;
        }
    }
    if (temp==0){ printf("\nString is a palindrome\n"); }
    else{ printf("\nString is not a palindrome\n"); }
    return 0;
}

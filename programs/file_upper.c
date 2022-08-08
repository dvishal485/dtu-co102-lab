/* This program is written by Vishal Das
(2K21/A8/24) on July 21, 2022 03:15 PM
for Lab File of course CO102
*/

#include <stdio.h>
#include <string.h>

int main(){
    char text[100];
    FILE *emp, *new_file;
    emp = fopen("text.txt","r");
    new_file = fopen("new_file.txt", "w");
    fgets(text, 100, emp);
    printf("Text in File : %s\n", text);
    for(int i=0;i<strlen(text);i++){
        if(text[i]>='a' && text[i]<='z')
            text[i] -= 32;
    }
    printf("Text in New File : %s\n", text);
    fprintf(new_file,"%s", text);
    printf("\nFile saved as new_file.txt!\n");

    return 0;
}

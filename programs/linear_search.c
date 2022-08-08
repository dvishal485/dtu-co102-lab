/* This program is written by Vishal Das
(2K21/A8/24) on July, 2022 03:10 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(void){
    int n;
    int arr[] = {10,6,5,8,9,75,26,64}; // array size = 8
    printf("Input the number which you want to search : ");
    scanf("%d", &n);
    for(int i=0; i<8; i++)
    {
        if(arr[i]==n){
            printf("\nFound %d at index %d\n", arr[i], i);
            return 0;
        }
    }
    printf("\nThe number does not exists in the array\n");
    return 0;
}

/* This program is written by Vishal Das
(2K21/A8/24) on July 07, 2022 03:30 PM
for Lab File of course CO102
*/

#include <stdio.h>
int main(void){
    int arr[50], num, x, y, temp;
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d", &num);
    printf("Please Enter the Value of Elements: ");
    for(x = 0; x < num; x++)
        scanf("%d", &arr[x]);
    for(x = 0; x < num - 1; x++){
        for(y = 0; y < num - x - 1; y++){
            if(arr[y] > arr[y + 1]){
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }

    printf("\nArray after implementing bubble sort: ");

    for(x = 0; x < num; x++){
        printf("%d  ", arr[x]);
    }
    printf("\n");
    return 0;

}


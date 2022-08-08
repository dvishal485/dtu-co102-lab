/* This program is written by Vishal Das
(2K21/A8/24) on July 07, 2022 03:50 PM
for Lab File of course CO102
*/

#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before insertion sort : ");
    printArray(arr, n);
    insertionSort(arr, n);
    printf("\nArray after insertion sort : ");
    printArray(arr, n);

    return 0;
}

#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x){
    if (r >= l){
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main(void){
    int arr[] = {5,6,8,9,10,26,64,75};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("Input the number which you want to search : ");
    scanf("%d", &x);

    int result = binarySearch(arr, 0, n - 1, x);

    if(result == -1){ printf("\nElement is not present in array\n"); }
    else{ printf("\nElement is present at index %d\n", result); }

    return 0;
}

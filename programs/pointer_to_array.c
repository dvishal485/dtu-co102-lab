#include <stdio.h>

int average(int *array, int n){
        int i, sum=0;
        float avg;
        for(i=0;i<n;i++){
            sum += *(array+i);
        }

        avg=(float)sum/n;
        printf("\nAverage of given array is %f\n", avg);
        return avg;
}

int main(){
    int a[100], *array, n, i;
    printf("Input number of elements : ");
    scanf("%d",&n);
    printf("Input the elements : ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    array=a;
    average(array, n);

}

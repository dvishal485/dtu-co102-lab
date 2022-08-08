#include <stdio.h>

int main(void){
    int n = 5;
    int k;
    for(int i=0;i<=n;i++){
        k = n-i;
        for(int j=1;j<=k;j++){
            printf("  ");
        }
    k = 2*i-1;
        for(int j=1;j<=k;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

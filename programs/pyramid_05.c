
#include <stdio.h>

int main(void){
    int n = 5;
    for(int i=0;i<=n;i++){
        int k = n-i;
        for(int j=1;j<=k;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

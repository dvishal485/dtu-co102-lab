#include <stdio.h>

int main(void){
    int n = 5;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

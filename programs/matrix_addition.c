#include <stdio.h>

void add_mat(int mat1[3][3], int mat2[3][3], int result[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];;
        }
    }
}

int main(void)
{
    int mat1[3][3] = {{1,2,3}, {4,5,6}, {7,8,2}};
    int mat2[3][3] = {{3,2,5}, {3,1,1}, {2,1,1}};
    int out[3][3];
    add_mat(mat1, mat2, out);
    printf("Matrix 1 :\n");
    for (int i=0; i < 3; i++){
        printf("%d %d %d\n", mat1[i][0], mat1[i][1], mat1[i][2]);
    }
    printf("\nMatrix 2 :\n");
    for (int i=0; i < 3; i++){
        printf("%d %d %d\n", mat2[i][0], mat2[i][1], mat2[i][2]);
    }
    printf("\nMatrix Addition :\n");
    for (int i=0; i < 3; i++){
        printf("%d %d %d\n", out[i][0], out[i][1], out[i][2]);
    }
    printf("\n");
}

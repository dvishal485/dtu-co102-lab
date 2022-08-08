#include <stdio.h>

void mul_mat(int mat1[3][3], int mat2[3][3], int result[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            int dot = mat1[i][0] * mat2[0][j] +
                      mat1[i][1] * mat2[1][j] +
                      mat1[i][2] * mat2[2][j];
            result[i][j] = dot;
        }
    }
}

int main(void)
{
    int mat1[3][3] = {{1,2,3}, {4,5,6}, {7,8,2}};
    int mat2[3][3] = {{3,2,5}, {3,1,1}, {2,5,1}};
    int out[3][3];
    mul_mat(mat1, mat2, out);
    printf("Matrix 1 :\n");
    for (int i=0; i < 3; i++){
        printf("%d %d %d\n", mat1[i][0], mat1[i][1], mat1[i][2]);
    }
    printf("\nMatrix 2 :\n");
    for (int i=0; i < 3; i++){
        printf("%d %d %d\n", mat2[i][0], mat2[i][1], mat2[i][2]);
    }
    printf("\nMatrix Multiplication :\n");
    for (int i=0; i < 3; i++){
        printf("%d %d %d\n", out[i][0], out[i][1], out[i][2]);
    }
    printf("\n");
}

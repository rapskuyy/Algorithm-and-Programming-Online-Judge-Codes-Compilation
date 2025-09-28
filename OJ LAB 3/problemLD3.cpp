#include <stdio.h>

int main(){
    
    // INI CODE SAYA KAK, INPUT DAN OUTPUTNYA BENER TAPI DI OJ TETEP SALAH
    int test, size[100], matrix1[100][51][51], matrix2[100][51][51], matrix3[100][51][51], mul1[100][51][51], mul2[100][51][51];
    int sum;

    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        scanf("%d", &size[i]);
        for(int r = 0; r < size[i]; r++){
            for(int c = 0; c < size[i]; c++){
                scanf("%d", &matrix1[i][r][c]);
            }
        }
        getchar();
        for(int r = 0; r < size[i]; r++){
            for(int c = 0; c < size[i]; c++){
                scanf("%d", &matrix2[i][r][c]);
            }
        }
        getchar();
        for(int r = 0; r < size[i]; r++){
            for(int c = 0; c < size[i]; c++){
                scanf("%d", &matrix3[i][r][c]);
            }
        }
    }

    for(int i = 0; i < test; i++){
        for(int r = 0; r < size[i]; r++){
            for(int c = 0; c < size[i]; c++){
                mul1[i][r][c] = 0;
                for(int k = 0; k < size[i]; k++){
                    mul1[i][r][c] += matrix1[i][r][k] * matrix2[i][k][c];
                }
            }
        }
    }
    
    for(int i = 0; i < test; i++){
        for(int r = 0; r < size[i]; r++){
            for(int c = 0; c < size[i]; c++){
                mul2[i][r][c] = 0;
                for(int k = 0; k < size[i]; k++){
                    mul2[i][r][c] += mul1[i][r][k] * matrix3[i][k][c];
                }
            }
        }
    }

    for(int i = 0; i < test; i++){
        printf("Case #%d:\n", i + 1);
        for(int r = 0; r < size[i]; r++){
            for(int c = 0; c < size[i]; c++){
                printf("%d ", mul2[i][r][c]);
            }
            printf("\n");
        }
    }
    return 0;

    // int t, n[10];
    // int sum;
    // int matrix[51][51][51]; 
    // int res_matrix[51][51][51]; 
    // int sum_matrix[51][51][51];
    // scanf("%d", &t);
    // for (int i = 0; i < t; i++) {
    //     scanf("%d", &n[i]);
    //     for (int mat = 0; mat < 3; mat++) {
    //         for (int row = 0; row < n[i]; row++) {
    //             for (int col = 0; col < n[i]; col++) {
    //                 scanf("%d",&matrix[mat][row][col]);
    //             }
    //         }
    //     }
    

    //     sum = 0;
    //     for (int row = 0; row < n[i]; row++) {
    //         for (int col = 0; col < n[i]; col++) {
    //             for (int k = 0; k < n[i]; k++) {
    //                 res_matrix[0][row][col] = matrix[0][row][k]*matrix[1][k][col];
    //                 sum += res_matrix[0][row][col];
    //             }
    //             res_matrix[0][row][col] = sum;
    //             sum = 0;
    //         }
    //     }

    //     for (int row = 0; row < n[i]; row++) {
    //         for (int col = 0; col < n[i]; col++) {
    //             for (int k = 0; k < n[i]; k++) {
    //                 res_matrix[1][row][col] = res_matrix[0][row][k]*matrix[2][k][col];
    //                 sum += res_matrix[1][row][col];
    //             }
    //             sum_matrix[i][row][col] = sum;
    //             sum = 0;
    //         }
    //     }
    // }

    // for (int i = 0; i < t; i++) {
    //     printf("Case #%d:\n", i+1);
    //     for (int row = 0; row < n[i]; row++) {
    //         for (int col = 0; col < n[i]; col++) {
    //             printf("%d", sum_matrix[i][row][col]);
    //             if (col != n[i]-1) {
    //                 printf(" ");
    //             } else {
    //                 printf("\n");
    //             }
    //         }
    //     }
    // }
    return 0;
}
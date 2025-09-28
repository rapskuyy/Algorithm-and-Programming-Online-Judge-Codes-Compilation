#include <stdio.h>

int main(){

    int t, n[10];
    int sum;
    int matrix[51][51][51]; 
    int res_matrix[51][51][51]; 
    int sum_matrix[51][51][51];
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n[i]);
        for (int mat = 0; mat < 3; mat++) {
            for (int row = 0; row < n[i]; row++) {
                for (int col = 0; col < n[i]; col++) {
                    scanf("%d",&matrix[mat][row][col]);
                }
            }
        }
    

        sum = 0;
        for (int row = 0; row < n[i]; row++) {
            for (int col = 0; col < n[i]; col++) {
                for (int k = 0; k < n[i]; k++) {
                    res_matrix[0][row][col] = matrix[0][row][k]*matrix[1][k][col];
                    sum += res_matrix[0][row][col];
                }
                res_matrix[0][row][col] = sum;
                sum = 0;
            }
        }

        for (int row = 0; row < n[i]; row++) {
            for (int col = 0; col < n[i]; col++) {
                for (int k = 0; k < n[i]; k++) {
                    res_matrix[1][row][col] = res_matrix[0][row][k]*matrix[2][k][col];
                    sum += res_matrix[1][row][col];
                }
                sum_matrix[i][row][col] = sum;
                sum = 0;
            }
        }
    }

    for (int i = 0; i < t; i++) {
        printf("Case #%d:\n", i+1);
        for (int row = 0; row < n[i]; row++) {
            for (int col = 0; col < n[i]; col++) {
                printf("%d", sum_matrix[i][row][col]);
                if (col != n[i]-1) {
                    printf(" ");
                } else {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}

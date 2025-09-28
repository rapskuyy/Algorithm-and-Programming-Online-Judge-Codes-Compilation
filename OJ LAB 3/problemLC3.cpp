#include <stdio.h>

// int main(){
    
//     int n, k[2001], total[2001];

//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         scanf("%d", &k[i]);
//         total[0] = 0;
//         total[i] = total[i-1] + k[i];
//         if(total[i] == 12){
//             total[i] = 28;
//         }
//         if(total [i] == 35){
//             total[i] = 7;
//         }
//         if(total[i] == 30){
//             total[i] = 10; 
//         }
//         if(total[i] >= 40){
//             total[i] = total[i] - 40;
//         }
//     }
//     printf("%d\n", total[n]);
//     return 0;
// }

int main(){

int test, size, matrix1[51][51], matrix2[51][51], matrix3[51][51], mul1[51][51], mul2[51][51];

        scanf("%d", &size);
        for(int r = 0; r < size; r++){
            for(int c = 0; c < size; c++){
                scanf("%d", &matrix1[r][c]);
            }
        }
        getchar();
        for(int r = 0; r < size; r++){
            for(int c = 0; c < size; c++){
                scanf("%d", &matrix2[r][c]);
            }
        }
        getchar();

for(int r = 0; r < size; r++){
        for(int c = 0; c < size; c++){
            mul1[r][c] = 0;
            mul2[r][c] = 0;
            for(int k = 0; k < size; k++){
                mul1[r][c] += matrix1[r][k] * matrix2[k][c];
            }
        }
    }

        for(int r = 0; r < size; r++){
            for(int c = 0; c < size; c++){
                printf("%d ", mul1[r][c]);
                }
                printf("\n");
            }
             return 0;
        }

#include <stdio.h>

int main(){

    // int t, n[1000];
    // scanf("%d", &t); getchar();
    // for(int i = 0; i < t; i++){
    //     scanf("%d", &n[i]); getchar();
    // }

    // for(int i = 0; i < t; i++){
    //     for(int j = 0; j < n[i]; j++){
    //         for(int k = 0; k < n[i]; k++){
    //             if(k == 0 || j == 0 || k == n[i] - 1|| j == n[i] - 1 || j == k || j == n[i] - k - 1)
    //                 printf("*");
    //             else
    //                 printf(" ");
    //         }
    //         printf("\n");
    //     }
    //     if(i != t - 1)
    //     printf("\n");
    // }

    int t, n;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(j == 0 || k == 0 || j == n - 1 || k == n - 1 || j == k || j == n - 1 - k){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
#include <stdio.h>

int main(){

    // int t, n[1000], a[1000][1000];
    // int sumOdd[1000] = {0}, sumEven[1000] = {0};
    // scanf("%d", &t);
    // for(int i = 0; i < t; i++){
    //     scanf("%d", &n[i]);
    //     for(int j = 0; j < n[i]; j++){
    //         scanf("%d", &a[i][j]);
    //         if(a[i][j] % 2 == 0){
    //             sumEven[i]++;
    //         }
    //         else{
    //             sumOdd[i]++;
    //         }
    //     }
    // }

    // for(int i = 0; i < t; i++){
    //     printf("Odd group : %d integer(s).\n", sumOdd[i]);
    //     printf("Even group : %d integer(s).\n", sumEven[i]);
    //     if(i != (t - 1)){
    //         printf("\n");
    //     }
    // }

    int t, n;
    int a[5000];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d", &n);
        int isEven = 0, isOdd = 0;
        for(int j = 0; j < n; j++){
            scanf("%d", &a[j]);
            if(a[j] % 2 == 0){
                isEven++;
            }
            else{
                isOdd++;
            }
        }
        printf("Odd group : %d integer(s).\n", isOdd);
        printf("Even group : %d integer(s).\n", isEven);
        printf("\n");
    }

    return 0;
}
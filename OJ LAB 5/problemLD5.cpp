#include <stdio.h>

int main(){
    
    int t, x;
    long long int a[101][101], count[101];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        for(int j = 0; j < 101; j++){
            count[j] = 0;
        }
        scanf("%d", &x);
        for(int j = 0; j < x; j++){
            for(int k = 0; k < x; k++){
                scanf("%lld", &a[j][k]);
            }
            getchar();
        }
        for(int j = 0; j < x; j++){
            for(int k = 0; k < x; k++){
                count[j] += a[k][j];
            }
        }
        printf("Case #%d:", i);
        for(int j = 0; j < x; j++){
            printf(" %lld", count[j]);
        }
        printf("\n");
    }



    return 0;
}
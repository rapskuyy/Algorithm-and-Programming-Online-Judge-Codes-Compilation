#include <stdio.h>

int main(){

    int n, q[101], t, posisi, angkaBaru;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &q[i]);
    }
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &posisi, &angkaBaru);
        printf("Case #%d:", i);
        for(int j = 0; j < n; j++){
            if(j == posisi - 1){
                q[j] = angkaBaru;
            }
            printf(" %d", q[j]);
        }
        printf("\n");
    }


    return 0;
}
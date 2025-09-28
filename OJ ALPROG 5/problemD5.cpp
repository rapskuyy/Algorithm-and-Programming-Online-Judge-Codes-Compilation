#include <stdio.h>

int main(){

    int a, b, taman[101][101], t, c, d, baru;

    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d", &taman[i][j]);
        }
    }
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d %d", &c, &d, &baru);
        taman[c-1][d-1] = baru;
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%d", taman[i][j]);
            if(j != b - 1){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
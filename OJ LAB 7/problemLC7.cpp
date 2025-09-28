#include <stdio.h>

int main(){

    int a, b, t, c, d, swap;
    int n[101][101];

    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d", &n[i][j]);
        }
    }
    scanf("%d", &t); getchar();
    for(int i = 0; i < t; i++){
        scanf("%d %d %d", &c, &d, &swap);
        n[c-1][d-1] = swap;
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%d", n[i][j]);
            if(j != (b - 1)){
                printf(" ");
            }
        }
        printf("\n");
    }   

    return 0;
}
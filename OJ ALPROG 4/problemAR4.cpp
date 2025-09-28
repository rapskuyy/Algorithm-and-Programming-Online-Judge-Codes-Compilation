#include <stdio.h>

int main(){

    int r, c;

    scanf("%d %d", &r, &c);
    for(int i = 0; i < r; i++){
        for(int j = 1; j <= c; j++){
            for(int k = 1; k <= c - j; k++){
                printf(" ");
            }
            for(int l = 1; l <= j; l++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
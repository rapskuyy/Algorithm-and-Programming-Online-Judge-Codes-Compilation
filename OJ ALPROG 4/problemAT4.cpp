#include <stdio.h>

int main(){

    int t, x, count;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &x);
        count = 0;
        for(int i = 1; i <= x; i++){
            for(int j = x - i; j > 0; j--){
                printf(" ");
            }
            for(int j = 1; j <= i + count; j++){
                printf("*");
            }
            count++;
            printf("\n");
        }
    }



    return 0;
}
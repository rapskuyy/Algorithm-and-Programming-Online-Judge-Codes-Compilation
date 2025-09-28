#include <stdio.h>

int main(){

    int t, r[100], c[100];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &r[i], &c[i]);
    }
    
    for(int i = 1; i <= t; i++){
        printf("Case #%d:\n", i);
        for(int j = 1; j <= r[i]; j++){
            for(int k = 1; k <= c[i]; k++){
                if(j == 1 || k == 1 || j == r[i] || k == c[i]){
                    printf("#");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
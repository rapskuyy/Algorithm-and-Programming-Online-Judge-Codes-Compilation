#include <stdio.h>

int main(){

    int d;

    scanf("%d", &d);

    for(int i = 0; i < d; i++){
        for(int j = 0; j < d; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
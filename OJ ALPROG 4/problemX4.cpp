#include <stdio.h>

int main(){

    int q, n = 1;
    scanf("%d", &q);
    for(int i = 0; i < q; i++){
        n = n*2 + 1;
    }
    printf("%d\n", n);

    return 0;
}
#include <stdio.h>

int main(){

    int t, n, a[101], b[101];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }
        for(int j = 0; j < n; j++){
            scanf("%d", &b[j]);
        }
        printf("Case #%d:", i);
        for(int j = 0; j < n; j++){
            printf(" %d", a[j] - b[j]);
        }
        printf("\n");
    }

    return 0;
}
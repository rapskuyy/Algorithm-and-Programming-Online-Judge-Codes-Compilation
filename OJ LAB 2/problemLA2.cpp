#include <stdio.h>

int main(){

    int t;
    int a[20], b[20];

    scanf("%d", &t);

    for(int i = 0; i < 3; i++){
        scanf("%d %d", &a[i], &b[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("%d\n", (a[i] / b[i]) << b[i]);
    }

    return 0;
}
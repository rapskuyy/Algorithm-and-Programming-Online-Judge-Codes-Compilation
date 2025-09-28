#include <stdio.h>

int main(){

    int n, a, sum = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a); getchar();
        sum += a;
    }
    printf("%d\n", sum);


    return 0;
}
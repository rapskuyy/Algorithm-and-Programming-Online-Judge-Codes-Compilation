#include <stdio.h>

int main(){

    int n, a[5000];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        if(a[i] >= a[i + 1] || a[i] == a[n]){
            printf("%d", a[i]);
            if(i < n-1){
                printf(" ");
            }
        }
    }
    printf("\n");

    return 0;
}
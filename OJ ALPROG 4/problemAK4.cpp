#include <stdio.h>

int main(){
    int n, a[1001];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        if(a[i+1] <= a[i] || i == (n - 1)){
            printf("%d", a[i]);
            if(i == (n-1)){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
    }

    return 0;
}
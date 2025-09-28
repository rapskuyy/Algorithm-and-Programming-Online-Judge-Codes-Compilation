#include <stdio.h>

int main(){

    int t, curr, angka;
    int n, a[150000];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        curr = 0;
        scanf("%d", &n);
        for(int j = 1; j <= n; j++){
            scanf("%d", &angka);
            curr = angka + a[j-1];
            a[j] = curr;
        }
        printf("Case #%d: ", i);
        for(int k = 1; k <= n; k++){
            if(a[k] == a[n] - a[k]){
                printf("Yes\n");
                break;
            }
            else if(k == n){
                printf("No\n");
            }
        }
    }



    return 0;
}
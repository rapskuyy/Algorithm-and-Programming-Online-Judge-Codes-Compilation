#include <stdio.h>

int main(){

    int t, n, k, m, x[10000];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d %d", &n, &k, &m);
        for(int j = 0; j < n; j++){
            scanf("%d", &x[j]);
        }
        int cek = 0;
        for(int j = 0; j < n; j++){
            if(x[j] >= m && x[j] <= k && cek <= x[j]){
                cek = x[j];
            }
        }
        if(cek == 0 ){
            cek = m;
        }
        printf("Case #%d: %d\n", i, cek);
    }
    
    return 0;
}
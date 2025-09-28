#include <stdio.h>

int main(){

    int t;
    long long int n, x[5000];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%lld", &n);
        int cekHasil;
        for(long long int j = 0; j < n; j++){
            scanf("%lld", &x[j]);
            if(j == 0){
                continue;
            }
            if(x[j] - x[j-1] >= 0 && (j == 0 || j == 1)){
                cekHasil = (x[j] - x[j-1]);
            }
            else if(x[j-1] - x[j] >= 0 && (j == 0 || j == 1)){
                cekHasil = (x[j-1] - x[j]);
            }
            if(j == 1){
                continue;
            }
            if(cekHasil >= x[j-1] - x[j-2] && x[j-1] - x[j-2] >= 0){
                cekHasil = x[j-1] - x[j-2];
            }
            else if(cekHasil >= x[j-2] - x[j-1] && x[j-2] - x[j-1] >= 0){
                cekHasil = x[j-2] - x[j-1];
            }
        }
        printf("Case #%d: %d\n", i, cekHasil);
    }

    return 0;
}
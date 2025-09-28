#include <stdio.h>

int under;

int checkON(long long int a[], int n){
    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int hasilXOR = a[i] ^ a[j];
            int countON = 0;

            while(hasilXOR > 0){
                if(hasilXOR & 1){
                    countON++;
                }
                hasilXOR >>= 1;
            }

            if(countON >= 3){
                count++;
            }else{
                under++;
            }
        }
    }

    return count;

}

int main(){

    int t, n, result;
    long long int a[1000];

    scanf("%d", &t); getchar();
    for(int i = 1; i <= t; i++){
        under = 0;
        scanf("%d", &n); getchar();
        for(int j = 0; j < n; j++){
            scanf("%lld", &a[j]); getchar();
        }
        result = checkON(a, n);
        printf("Case #%d: %d %d\n", i, result, under);
    }

    return 0;
}
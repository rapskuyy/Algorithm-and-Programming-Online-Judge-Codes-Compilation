#include <stdio.h>

int main(){
    int t, n;
    long long int a[1000], sum;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        sum = 0;
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%lld", &a[j]);
            sum += a[j];
        }
        printf("Case #%d: %lld\n", i, sum);
    }

    return 0;
}
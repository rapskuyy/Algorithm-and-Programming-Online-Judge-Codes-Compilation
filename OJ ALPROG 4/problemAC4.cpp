#include <stdio.h>

int main(){

    long long int t, n, m, p;

    scanf("%lld", &t);
    for(long long int i = 1; i <= t; i++){
        long long int counter = 0;
        scanf("%lld %lld", &n, &m);
        for(long long int j = 0; j < n; j++){
            scanf("%lld", &p);
            if(m / p >= counter){
                counter = (m/p);
            }
        }
        printf("Case #%lld: %lld\n", i, counter);
    }

    return 0;
}
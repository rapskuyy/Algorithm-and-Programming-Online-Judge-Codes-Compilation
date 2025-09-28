#include <stdio.h>

int main(){

    long long int n, a, counter = 0;

    scanf("%lld", &n);
    for(long long int i = 0; i < n; i++){
        scanf("%lld", &a);
        if(a >= 0){
            counter += a;
        }
    }
    printf("%lld\n", counter);

    return 0;
}
#include <stdio.h>

int main(){

    int t;
    long long int k, start, jump, counter;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        start = 0, counter = 0, jump = 1;
        scanf("%lld", &k);
        do{
            start += jump;
            jump++;
            counter++;
        } while(start < k);
        printf("Case #%d: %lld\n", i, counter);
    }

    return 0;
}
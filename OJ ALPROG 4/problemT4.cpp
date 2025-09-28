#include <stdio.h>

int main(){

    int a, b, c;
    long long int n, counter = 0;

    scanf("%lld", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(b > c){
            counter++;
        }
    }
    printf("%lld\n", counter);


    return 0;
}
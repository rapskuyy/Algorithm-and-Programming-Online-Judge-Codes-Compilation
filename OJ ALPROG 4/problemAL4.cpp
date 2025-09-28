#include <stdio.h>

int main(){

    long long int n, m, x[100001], y[100001], count1 = 0, count2 = 0;

    scanf("%lld %lld", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%lld", &x[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%lld", &y[i]);
    }

    for(int i = 0; i < n; i++){
        if(count1 <= x[i]){
            count1 = x[i];
        }
    }

    for(int i = 0; i < m; i++){
        if(count2 <= y[i]){
            count2 = y[i];
        }
    }

    if(count1 > count2){
        printf("The dark secret was true\n");
    }else{
        printf("Secret debunked\n");
    }

    return 0;
}
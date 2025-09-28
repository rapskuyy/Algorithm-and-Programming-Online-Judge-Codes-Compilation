#include <stdio.h>

int fibo(int a, int b, int k){
    if(k == 0){
        return a;
    }
    else if(k == 1){
        return b;
    }
    else{
        return fibo(a, b, k-1) + fibo(a, b, k-2);
    }
}

int main(){

    int a, b, k;

    scanf("%d %d", &a, &b); getchar();
    scanf("%d", &k);

    printf("%d\n", fibo(a, b, k));

    return 0;
}
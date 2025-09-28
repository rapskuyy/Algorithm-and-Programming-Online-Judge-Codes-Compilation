#include <stdio.h>

int main(){

    int t;
    long long int a, angka, counter;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%lld", &a);
        printf("Case %d: ", i);
        counter = 0;
        angka = 1;
        for(long long int j = 1; j <= a; j++){
            if(j == a){
                angka += counter;
                printf("%lld", angka);
                counter++;
            }else{
                angka += counter;
                printf("%lld ", angka);
                counter++;
            }
        }
        printf("\n");
    }
}
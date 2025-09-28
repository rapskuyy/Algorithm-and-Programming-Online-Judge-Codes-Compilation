#include <stdio.h>

int main(){

    int t;
    long long int n;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%lld", &n);
        printf("Case #%d:\n", i);
        for(long long int j = 1; j<= n; j++){
            printf("%lld ", j);
            if((j % 3 == 0 || j % 5 == 0) && j % 15 != 0){
                printf("Jojo\n");
            }
            else{
                printf("Lili\n");
            }
        }
    }

    return 0;
}
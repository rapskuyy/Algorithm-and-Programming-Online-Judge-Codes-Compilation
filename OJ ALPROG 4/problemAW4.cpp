#include <stdio.h>

int main(){

    int t, n, curr, a[20001], temp;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        for(int j = 1; j <= 20000; j++){
            a[j] = 0;
        }
        scanf("%d", &n);
        temp = 0;
        for(int j = 0; j < n; j++){
            scanf("%d", &curr);
            a[curr]++;
        }
        for(int j = 1; j <= 20000; j++){
            if(a[j] != 0){
                temp = a[j];
            }
        }
        printf("Case #%d: %d\n", i, temp);
    }

    return 0;
}
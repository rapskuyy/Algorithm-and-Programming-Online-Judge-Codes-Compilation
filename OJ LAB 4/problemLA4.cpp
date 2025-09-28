#include <stdio.h>

int main(){

    int t, n, m, price[10000], sum;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d", &n, &m);
        sum = 0;
        for(int j = 0; j < n; j++){
            scanf("%d", &price[j]);
            sum += price[j];
        }
        printf("Case #%d: ", i + 1);
        if(sum > m){
            printf("Wash dishes\n");
        }
        else{
            printf("No worries\n");
        }
    }
    
    return 0;
}
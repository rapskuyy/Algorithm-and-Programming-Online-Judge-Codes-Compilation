#include <stdio.h>

int main(){

    int t, n, m, p;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int sum = 0;
        scanf("%d %d", &n, &m);
        for(int j = 0; j < n; j++){
            scanf("%d", &p);
            sum += p;
        }
        if(sum > m){
            printf("Case #%d: Wash dishes\n", i);
        }
        else{
            printf("Case #%d: No worries\n", i);
        }
    }

    return 0;
}
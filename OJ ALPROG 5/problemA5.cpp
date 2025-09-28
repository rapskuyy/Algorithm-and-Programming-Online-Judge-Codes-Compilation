#include <stdio.h>

int main(){

    int n, views[101], t, min, max;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &views[i]); getchar();
    }
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int sum = 0;
        scanf("%d %d", &min, &max);
        for(int j = min; j <= max; j++){
            sum = sum + views[j];
        }
        printf("Case #%d: %d\n", i, sum);

    }

    return 0;
}
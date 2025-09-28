#include <stdio.h>

int main(){

    int t, n, m, q, curr;
    int patternTeman[51][51], ruangan[51], teman[51];
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d %d", &n, &m, &q);
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= m; k++){
                scanf("%d", &patternTeman[j][k]);
            }
        }
        for(int j = 1; j <= m; j++){
            ruangan[j] = 0;
        }
        for(int j = 0; j < q; j++){
            scanf("%d", &teman[j]);
        }
        for(int j = 0; j < q; j++){
            curr = teman[j];
            for(int k = 1; k <= m; k++){
                ruangan[k] += patternTeman[curr][k];
            }
        }
        printf("Case #%d:\n", i);
        for(int k = 1; k <= m; k++){
            if(ruangan[k] % 2 == 0){
                printf("NO\n");
            }
            else{
                printf("YES\n");
            }
        }

    }

    return 0;
}
#include <stdio.h>

int main(){

    int t, n;
    char corr[500], ans[500];
    int nilai;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int counter = 0;
        scanf("%d", &n); getchar();
        scanf("%s", ans); getchar();
        scanf("%s", corr); getchar();
        for(int i = 0; i < n; i++){
            if(ans[i] == corr[i]){
                counter++;
            }
        }
        nilai = counter * 100 / n;
        printf("Case #%d: %d\n", i, nilai);
    }




    return 0;
}
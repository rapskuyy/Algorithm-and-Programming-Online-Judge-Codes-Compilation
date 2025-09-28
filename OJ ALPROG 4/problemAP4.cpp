#include <stdio.h>

int main(){

    int t, n, k;
    char word[105];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &n, &k);
        for(int j = 0; j < n; j++){
            scanf("%c", word[j]);
        }
    }

    


    return 0;
}
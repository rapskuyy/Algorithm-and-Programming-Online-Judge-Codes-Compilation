#include <stdio.h>

int main(){
    int n, k[2001], total = 0;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &k[i]);
        total += k[i];
        if(total == 30) total = 10;
        if(total == 12) total = 28;
        if(total == 35) total = 7;
        if(total >= 40) total %= 40;
    }

    printf("%d\n", total);
    return 0;
}
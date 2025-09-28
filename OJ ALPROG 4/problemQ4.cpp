#include <stdio.h>

int main(){

    int t, n, x, hb;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &n, &x);
        if(n / 2 >= x){
            hb = x / 2;
        }
        else{
            x = n - x;
            hb = x/2;
            if(n%2 == 0 && x%2 != 0){
                hb++;
            }
        }
        printf("Case #%d: %d\n", i , hb);

    }
    
    return 0;
}
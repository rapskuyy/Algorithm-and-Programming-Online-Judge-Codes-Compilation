#include <stdio.h>

int main(){

    int t, drink, bagi;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int sum = 0;
        scanf("%d %d", &drink, &bagi);
        sum += drink;
        while (drink != 0){
            if(drink - bagi >= 0){
                drink -= bagi;
                drink++;
                sum++;
            }
            else{
                break;
            }
        }
        printf("Case #%d: %d\n", i, sum);
    }

    return 0;
}
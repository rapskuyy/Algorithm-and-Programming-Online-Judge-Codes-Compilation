#include <stdio.h>

int main(){

    int t, n[500], curr, count = 0;

    scanf("%d", &t);
    for(int i = 0; i <= t; i++){
        n[i] = 0;
    }
    for(int i = 0; i < t * t; i++){
        scanf("%d", &curr); 
        n[curr]++;
    }
    for(int i = 1; i <= t; i++){
        if(n[i] < t){
            count++;
        }
        else{
            continue;
        }
    }
    printf("%d\n", count);

    return 0;
}
#include <stdio.h>

int main(){

    int n, p, x, counter;

    scanf("%d %d", &n, &p);
    counter = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        if(x < p){
            counter++;
        }
    }
    printf("%d\n", counter);


    return 0;
}
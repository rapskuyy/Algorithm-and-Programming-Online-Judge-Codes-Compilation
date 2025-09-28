#include <stdio.h>

int main(){

    int t, a[5005], counter = 0, beda;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < t; i++){
        beda = 1;
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){
                beda = 0;
                break;
            }
        }
        if(beda){
            counter++;
        }
    }
    printf("%d\n", counter);
    return 0;
}

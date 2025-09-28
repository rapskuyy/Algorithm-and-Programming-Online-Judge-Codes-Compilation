#include <stdio.h>

int main(){

    int d, a[1000], sum = 0;

    scanf("%d", &d);
    for(int i = 0; i < d; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%d\n", sum);


    return 0;
}
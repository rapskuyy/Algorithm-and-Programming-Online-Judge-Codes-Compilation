#include <stdio.h>

int main(){

    int n, j, l, b, p[100], sum = 0, avg;

    scanf("%d", &n);
    scanf("%d %d %d", &j, &l, &b);
    sum = j + l + b;

    for(int i = 0; i < n; i++){
        scanf("%d", &p[i]);
        sum += p[i];
    }

    avg = sum / (n + 3);
    // printf("%d\n", sum);
    // printf("%d\n", avg);
    if(j >= avg){
        printf("Jojo lolos\n");
    }
    else{
        printf("Jojo tidak lolos\n");
    }

    if(l >= avg){
        printf("Lili lolos\n");
    }
    else{
        printf("Lili tidak lolos\n");
    }

    if(b >= avg){
        printf("Bibi lolos\n");
    }
    else{
        printf("Bibi tidak lolos\n");
    }

    return 0;
}
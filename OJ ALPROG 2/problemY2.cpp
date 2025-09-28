#include <stdio.h>

int main(){

    int t;
    long int a[10], b[10];
    double c[10];

    scanf("%d", &t);

    for(int i = 0; i < 3; i++){
        scanf("%ld %ld", &a[i], &b[i]);
    }

    for(int i = 0; i < 3; i++){
        c[i]= a[i] / 100.0 * b[i];
        printf("%.2lf\n", c[i]);
    }


    return 0;
}
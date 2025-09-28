#include <stdio.h>

int main(){

    int t;
    double a[5];
    double hasil1[5], hasil2[5], hasil3[5];

    scanf("%d", &t);

    for(int i = 0; i < 3; i++){
        scanf("%lf", &a[i]);
    }

    for(int i = 0; i < 3; i++){
       
        hasil1[i] = 0.8 * a[i];
        hasil2[i] = 1.8 * a[i] + 32.0;
        hasil3[i] = a[i] + 273.0;

        printf("%.2lf %.2lf %.2lf\n", hasil1[i], hasil2[i], hasil3[i]);
    }


    return 0;
}
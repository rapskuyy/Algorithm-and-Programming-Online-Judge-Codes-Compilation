#include <stdio.h>

int main(){
    double a, b, c;
    double perkalian1, perkalian2, perkalian3, hasil;

    scanf("%lf %lf %lf", &a, &b, &c);
    perkalian1 = 0.2 * a;
    perkalian2 = 0.3 * b;
    perkalian3 = 0.5 * c;
    hasil = perkalian1 + perkalian2 + perkalian3;
    printf("%.2lf\n", hasil);

    return 0;
}
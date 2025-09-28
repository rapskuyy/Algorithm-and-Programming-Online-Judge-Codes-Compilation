#include <stdio.h>

int main(){
    double a, b, c, d;
    double e, f, g, h;
    double i, j, k, l;
    double hasil1, hasil2, hasil3;

    scanf("%lf %lf %lf %lf\n", &a, &b, &c, &d);
    scanf("%lf %lf %lf %lf\n", &e, &f, &g, &h);
    scanf("%lf %lf %lf %lf", &i, &j, &k, &l);

    hasil1 =  2 * a + 2 * b + 2 * c + d;
    hasil2 =  2 * e + 2 * f + 2 * g + h;
    hasil3 =  2 * i + 2 * j + 2 * k + l;

    printf("%.2lf\n", hasil1);
    printf("%.2lf\n", hasil2);
    printf("%.2lf\n", hasil3);


    return 0;
}
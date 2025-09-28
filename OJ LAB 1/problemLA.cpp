#include <stdio.h>
#include <math.h>

int main(){

    int X;
    double Y, persen, kurung, pangkat, hasil;

    scanf("%d %lf", &X, &Y);

    persen = Y / 100.0;
    kurung = 1.0 + persen;
    pangkat = pow(kurung, 3.0);
    hasil = pangkat * X;
    printf("%.2lf\n", hasil);

    return 0;

}
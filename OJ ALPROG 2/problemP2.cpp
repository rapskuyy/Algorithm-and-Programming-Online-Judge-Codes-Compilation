#include <stdio.h>

// int main(){

//     double a, b, bagian1, hasil1;
//     double c, d, bagian2, hasil2;
//     double e, f, bagian3, hasil3;
//     double g, h, bagian4, hasil4;

//     scanf("%lf %lf\n", &a, &b);
//     scanf("%lf %lf\n", &c, &d);
//     scanf("%lf %lf\n", &e, &f);
//     scanf("%lf %lf", &g, &h);

//     bagian1 = 100 - a;
//     hasil1 = 100 / bagian1 * b;
//     bagian2 = 100 - c;
//     hasil2 = 100 / bagian2 * d;
//     bagian3 = 100 - e;
//     hasil3 = 100 / bagian3 * f;
//     bagian4 = 100 - g;
//     hasil4 = 100 / bagian4 * h;
    
//     printf("$%.2lf\n", hasil1);
//     printf("$%.2lf\n", hasil2);
//     printf("$%.2lf\n", hasil3);
//     printf("$%.2lf\n", hasil4);

//     return 0;
// }

int main(){

    double a[50], b[50], hasil[100];

    for(int i = 0; i < 4; i++){
        scanf("%lf %lf", &a[i], &b[i]);
    }

    for(int i = 0; i < 4; i++){
        hasil[i] = 100.0 / (100.0 - a[i]) * b[i];
        printf("$%.2lf\n", hasil[i]);
    }
    
    return 0;
}
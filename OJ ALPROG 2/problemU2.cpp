#include <stdio.h>

// int main(){

//     int T, A, C, E;
//     long long int B, D, F;
//     double hasil1, hasil2, hasil3;

//     scanf("%d\n", &T);
//     scanf("%d %lld\n", &A, &B);
//     scanf("%d %lld\n", &C, &D);
//     scanf("%d %lld", &E, &F);

//     hasil1 = A * B / 360.0;
//     hasil2 = C * D / 360.0;
//     hasil3 = E * F / 360.0;

//     printf("%.2lf\n", hasil1);
//     printf("%.2lf\n", hasil2);
//     printf("%.2lf\n", hasil3);


//     return 0;
// }

int main(){

    int t;
    long long int a[100], b[100];
    double hasil[200];

    scanf("%d\n", &t);

    for(int i = 0; i < 3; i++){
        scanf("%lld %lld", &a[i], &b[i]);
        getchar();
    }

    for(int i = 0; i < 3; i++){
        hasil[i] = a[i] * b[i] / 360.0;
        printf("%.2lf\n", hasil[i]);
    }

    return 0;
}

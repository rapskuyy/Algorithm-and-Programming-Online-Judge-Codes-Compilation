#include <stdio.h>

// int main()
// {
//     long int a,b,c,d;
//     long int e,f,g,h;
//     long int i,j,k,l;
//     long int hasil1, hasil2, hasil3;
   
//     scanf("(%ld+%ld)x(%ld-%ld)\n", &a, &b, &c, &d);
//     scanf("(%ld+%ld)x(%ld-%ld)\n", &e, &f, &g, &h);
//     scanf("(%ld+%ld)x(%ld-%ld)", &i, &j, &k, &l);

//     hasil1 = (a + b) * (c - d);
//     hasil2 = (e + f) * (g - h);
//     hasil3 = (i + j) * (k - l);

//     printf("%ld %ld %ld\n", hasil1, hasil2, hasil3);

//     return 0;
// }

int main(){

    long int a[50], b[50], c[50], d[50];
    long int hasil[100];

    for(int i = 0; i < 3; i++){
        scanf("(%ld+%ld)x(%ld-%ld)", &a[i], &b[i], &c[i], &d[i]);
        getchar();
    }

    for(int i = 0; i < 3; i++){
        hasil[i] = (a[i] + b[i]) * (c[i] - d[i]);
        printf("%ld ", hasil[i]);
    }

    printf("\n");

    return 0;
}
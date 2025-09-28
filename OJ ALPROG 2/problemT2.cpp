#include <stdio.h>

int main(){

    char course[10][500];
    int a[100], b[100], c[100], d[100];

    for(int i = 0; i < 5; i++){
        scanf("%s %d:%d-%d:%d", course[i], &a[i], &b[i], &c[i], &d[i]);
        getchar();
    }

    for(int i = 0; i < 5; i++){
        printf("%s %.2d:%.2d-%.2d:%.2d\n", course[i], a[i] - 1, b[i], c[i] - 1, d[i]);
    }

    return 0;
}

// int main(){

//     char course1[15], course2[15], course3[15], course4[15], course5[15];
//     int a,b,c,d;
//     int e,f,g,h;
//     int i,j,k,l;
//     int m,n,o,p;
//     int q,r,s,t;

//     scanf("%s %d:%d-%d:%d\n", course1, &a, &b, &c, &d);
//     scanf("%s %d:%d-%d:%d\n", course2, &e, &f, &g, &h);
//     scanf("%s %d:%d-%d:%d\n", course3, &i, &j, &k, &l);
//     scanf("%s %d:%d-%d:%d\n", course4, &m, &n, &o, &p);
//     scanf("%s %d:%d-%d:%d", course5, &q, &r, &s, &t);

//     printf("%s %.2d:%.2d-%.2d:%.2d\n", course1, a - 1, b, c - 1, d);
//     printf("%s %.2d:%.2d-%.2d:%.2d\n", course2, e - 1, f, g - 1, h);
//     printf("%s %.2d:%.2d-%.2d:%.2d\n", course3, i - 1, j, k - 1, l);
//     printf("%s %.2d:%.2d-%.2d:%.2d\n", course4, m - 1, n, o - 1, p);
//     printf("%s %.2d:%.2d-%.2d:%.2d\n", course5, q - 1, r, s - 1, t);

//     return 0;
// }
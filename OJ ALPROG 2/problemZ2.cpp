#include <stdio.h>

int main(){
    
    int t;
    double a[50], b[50], c[50], d[50];
    double hasil[100];

    scanf("%d", &t);

    for(int i = 0; i < 3; i++ ){
        scanf("%lf %lf %lf %lf", &a[i], &b[i], &c[i], &d[i]);
    }

    for(int i = 0; i < 3; i++ ){
        hasil[i] = 2.0 * a[i] + 2.0 * b[i] + 4.0 / 3.0 * c[i] + d[i] / 2.0;
        printf("%.2lf\n", hasil[i]); 
    }
    
    return 0;
}
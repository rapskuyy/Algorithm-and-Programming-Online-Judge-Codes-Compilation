#include <stdio.h>
#include <math.h>

int main(){

    double l, b, h, area1, area2;

    scanf("%lf %lf %lf", &l, &b, &h);
    area1 = 0.5 * b * h;
    area2 = b * l;
    printf("%.3lf\n", 2 * area1 + 3 * area2);

    return 0;
}
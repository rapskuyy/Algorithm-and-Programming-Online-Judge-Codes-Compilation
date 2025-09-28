#include <stdio.h>

int main()
{
    double a, b;
    double c, d, e;

    scanf("%lf %lf", &a, &b);
    c = b / a;
    d = 1.0 - c;
    e = d * 100.0;
    printf("%.2lf%%\n", e);

    return 0;
}
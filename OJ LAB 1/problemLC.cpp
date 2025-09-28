#include <stdio.h>

int main()
{
    int a, b;
    double c, d, e;

    scanf("%d %d", &a, &b);
    c = b / ((double)a);
    d = 1.0 - c;
    e = d * 100.0;
    printf("%.2lf%%\n", e);

    return 0;
}
#include <stdio.h>

int main()
{
    int a, b, c, d;
    int w, x, y, z;

    scanf("%d %d", &a, &w);
    scanf("%d %d", &b, &x);
    scanf("%d %d", &c, &y);
    scanf("%d %d", &d, &z);

    printf("%d\n", a * w);
    printf("%d\n", b * x);
    printf("%d\n", c * y);
    printf("%d\n", d * z);

    return 0;
}
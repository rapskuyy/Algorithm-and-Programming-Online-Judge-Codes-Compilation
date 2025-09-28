#include <stdio.h>

int main()
{
    int a = 1;
    long long int b, c;

    scanf("%lld", &b);
    c = (long long)a << b;
    printf("%lld\n", c - 1);

    return 0;
}
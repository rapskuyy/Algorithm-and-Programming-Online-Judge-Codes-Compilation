#include <stdio.h>

int main()
{
    long int a, b, c, d;
    long int m, n;

    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    m = a * b;
    n = c - d;
    if(m == n)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }


    return 0;
}
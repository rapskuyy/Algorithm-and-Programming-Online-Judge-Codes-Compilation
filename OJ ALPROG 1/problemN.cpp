#include <stdio.h>

int main()
{
    char N1[105], N2[105];
    double T1, T2;
    int U1, U2;

    scanf("%s %lf %i %s %lf %i", &N1, &T1, &U1, &N2, &T2, &U2);
    printf("Name 1: %s\n", N1);
    printf("Height 1: %.2lf\n", T1);
    printf("Age 1: %i\n", U1);
    printf("Name 2: %s\n", N2);
    printf("Height 2: %.2lf\n", T2);
    printf("Age 2: %i\n", U2);

    return 0;
}
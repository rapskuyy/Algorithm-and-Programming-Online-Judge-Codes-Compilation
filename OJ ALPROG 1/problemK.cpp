#include <stdio.h>

int main()
{
    char N[105];
    char A[10];
    int U;

    scanf("%[^\n]", &N);
    scanf("%s %d", &A, &U);

    printf("Name: %s\n", N);
    printf("NIS: %s\n", A);
    printf("Age: %d\n", U);

    return 0;
}
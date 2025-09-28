#include <stdio.h>

int main()
{
    int N, M;

    scanf("%d %d", &N, &M);

    for(int counter = 0; counter < M; counter++)
    {
        printf("%d\n", N);
        N++;
    }

    return 0;
} 
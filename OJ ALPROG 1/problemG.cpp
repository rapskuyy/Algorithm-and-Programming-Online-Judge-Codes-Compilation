#include <stdio.h>

int main()
{
    char nama[110];

    scanf("%[^\n]", &nama);
    printf("Happy Birthday to %s.\n", nama);

    return 0;
}
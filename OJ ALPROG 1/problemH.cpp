#include <stdio.h>

int main()
{
    char nama[110];

    scanf("%[^\n]", &nama);
    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", nama);

    return 0;
}
#include <stdio.h>

int main()
{
    int t;
    long int a, b, c;

    scanf("%d", &t);

    for(int i = 1; i <= t; i++)
    {
        scanf("%ld %ld", &a, &b);
        printf("Case #%d: ", i);
        c = a * b;
        if(c % 2 == 1)
        {
            printf("Need more frogs\n");
        }
        else
        {
            printf("Party time!\n");
        }
    }

    return 0;
}
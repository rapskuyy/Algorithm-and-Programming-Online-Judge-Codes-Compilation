#include <stdio.h>

int main(){
    int a, b, c, d, e, f;

    scanf("%d + %d =\n", &a, &b);
    scanf("%d + %d =\n", &c, &d);
    scanf("%d + %d =", &e, &f);

    printf("%d\n", a + b);
    printf("%d\n", c + d);
    printf("%d\n", e + f);


    return 0;
}
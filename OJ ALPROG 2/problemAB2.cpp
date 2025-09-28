#include <stdio.h>

int main(){
    long int a, b;

    scanf("%ld", &a);
    
    b = a/2.0 * (200 + (a-1)*50);
    printf("%ld\n", b);

    return 0;
}
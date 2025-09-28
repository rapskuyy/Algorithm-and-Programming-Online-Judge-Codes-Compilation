#include <stdio.h>
#include <string.h>

int main(){

    int t, length;
    char angka[500];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        length = 0;
        scanf("%s", angka);
        length = strlen(angka);
        printf("Case #%d: %d\n", i, length);
    }

    return 0;
}
#include <stdio.h>

int main(){
    int t, p[5];
    long int x[5];

    scanf("%d", &t);

    for(int i = 0; i < 3; i++){
        scanf("%ld %d", &x[i], &p[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("%ld\n", x[i] >> p[i] & 1);
    }

    return 0;
}

#include <stdio.h>

// int main()
// {
//     int a, b, c, d;
//     int w, x, y, z;

//     scanf("%d %d", &a, &w);
//     scanf("%d %d", &b, &x);
//     scanf("%d %d", &c, &y);
//     scanf("%d %d", &d, &z);

//     printf("%d\n", a * w);
//     printf("%d\n", b * x);
//     printf("%d\n", c * y);
//     printf("%d\n", d * z);

//     return 0;
// }

int main(){
    
    int a[50], b[50];

    for(int i = 0; i < 4; i++){
        scanf("%d %d", &a[i], &b[i]);
    }

    for(int i = 0; i < 4; i++){
        printf("%d\n", a[i] * b [i]);
    }

    return 0;
}
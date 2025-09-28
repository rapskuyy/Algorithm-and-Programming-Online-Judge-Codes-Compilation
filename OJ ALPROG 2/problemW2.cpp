#include <stdio.h>
#include <string.h>

// int main(){

//     char a[10], b[10], c[10];

//     scanf("%s\n", &a);
//     scanf("%s\n", &b);
//     scanf("%s", &c);
   
//     printf("%c\n", a[1]);
//     printf("%c\n", b[1]);
//     printf("%c\n", c[1]);

//     return 0;
// }

// PAKE INT (RUMUS)

// int main(){

//     int a[5];

//     for(int i = 0; i < 3; i++){
//         scanf("%d", &a[i]);
//         getchar();
//     }
    
//     for(int i = 0; i < 3; i++){
//         printf("%d\n", (a[i] / 10) % 10);
//     }

//     return 0;
// }


// PAKE CHAR LOOP

int main(){

    char a[5][100];
    for(int i = 0; i < 3; i++){
        scanf("%s", a[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("%c\n", a[i][1]);
    }

    return 0;
}
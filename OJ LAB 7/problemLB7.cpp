#include <stdio.h>

int main(){

    int t;
    int n[101][101];

    scanf("%d", &t); getchar();
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            scanf("%c", &n[i][j]);
        }
        getchar();
    }

    for(int i = t - 1; i >= 0; i--){
        for(int j = t - 1; j >= 0; j--){
            printf("%c", n[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// int main(){

//     int t;

//     scanf("%c", &t); getchar();
//     printf("%c\n", t);

//     return 0;
// }
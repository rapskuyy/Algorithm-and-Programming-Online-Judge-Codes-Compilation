#include <stdio.h>
#include <string.h>

int main(){

    int t;
    char word[1500];

    scanf("%d", &t); getchar();
    for(int i = 1; i <= t; i++){
        scanf("%[^\n]", word); getchar();
        printf("Case #%d: ", i);
        for(int j = strlen(word) - 1; j >= 0; j--){
            printf("%c", word[j]);
        }
        printf("\n");
    }

    return 0;
}
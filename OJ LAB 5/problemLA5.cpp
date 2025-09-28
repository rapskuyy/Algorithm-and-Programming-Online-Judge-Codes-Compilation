#include <stdio.h>
#include <string.h>

int main(){

    int t;
    char s[5000];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%s", s);
        printf("Case %d: ", i);
        for(int i = strlen(s) - 1; i >= 0; i--){
            printf("%d", int(s[i]) % 2);
        }
        printf("\n");
    }
}
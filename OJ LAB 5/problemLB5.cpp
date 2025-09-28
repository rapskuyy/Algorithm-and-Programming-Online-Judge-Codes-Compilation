#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    int t;
    char word[5000];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%s", word);
        printf("Case #%d: ", i);
        for(int j = strlen(word) - 1; j >= 0; j--){
            if(toupper(word[j]) == word[j]){
                printf("%c", tolower(word[j]));
            }
            else if(tolower(word[j]) == word[j]){
                printf("%c", toupper(word[j]));
            }
        }
        printf("\n");
    }

    return 0;
}
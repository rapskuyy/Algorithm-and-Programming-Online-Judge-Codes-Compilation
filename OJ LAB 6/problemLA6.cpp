#include <stdio.h>
#include <string.h>

int main(){

    int t;
    char word[600], curr[600];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%s", word);
        for(int j = strlen(word) - 1, k = 0; j >= 0, k < strlen(word); j--, k++){
            curr[k] = word[j];
        }
        curr[strlen(word)] = '\0';
        // printf("%s\n", curr);
        printf("Case #%d: ", i);
        if(strcmp(word, curr) == 0){
            printf("Yay, it's a palindrome\n");
        }
        else{
            printf("Nah, it's not a palindrome\n");
        }
    }

    return 0;
}
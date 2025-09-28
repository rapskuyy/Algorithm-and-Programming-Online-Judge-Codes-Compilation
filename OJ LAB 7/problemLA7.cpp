#include <stdio.h>
#include <string.h>

int main(){

    int t, len;
    char arr[1000000];
    char alphabet[26];

    scanf("%d", &t); getchar();
    for(int i = 1; i <= t; i++){
        int sum = 0;
        for(int j = 0; j < 26; j++){
            alphabet[j] = ' ';
        }
        scanf("%s", arr); getchar();
        len = strlen(arr);
        for(int j = 0; j < len; j++){
            int k = arr[j] - 'a';
            alphabet[k] = 1;
        }
        for(int j = 0; j < 26; j++){
            if(alphabet[j] == 1){
                sum++;
            }
        }
        printf("Case #%d: ", i);
        if(sum % 2 == 0){
            printf("Yay\n");
        }
        else{
            printf("Ewwww\n");
        }
    }

    return 0;
}
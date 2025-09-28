#include <stdio.h>
#include <string.h>

int main(){

    char arr[1000000];

    scanf("%s", arr);

    int upperCase[26] = {0};
    int lowerCase[26] = {0};
    int length = strlen(arr);

    for(int i = 0; i < length; i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            upperCase[arr[i] - 'A']++;
        }
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            lowerCase[arr[i] - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++){
        for(int j = 0; j < upperCase[i]; j++){
            printf("%c", i +'A');
        }
        for(int j = 0; j < lowerCase[i]; j++){
            printf("%c", i +'a');
        }
    }
    puts("");

    return 0;
}
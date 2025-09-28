#include <stdio.h>

int main(){

    int t, n;
    char word[500];

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        scanf("%s", word);
        int countL = 0, countB = 0;
        for(int j = 0; j < n; j++){
            if(word[j] == 'L'){
                countL++;
            }
            else if(word[j] == 'B'){
                countB++;
            }
        }
        if(countL > countB){
            printf("Lili\n");
        }
        else if(countL < countB){
            printf("Bibi\n");
        }
        else{
            printf("None\n");
        }
    }

    return 0;
}
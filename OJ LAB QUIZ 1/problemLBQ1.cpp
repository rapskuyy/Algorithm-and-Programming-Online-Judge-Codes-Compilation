#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    int n, counter = 0;
    scanf("%d", &n); getchar();
    char angka[n];
    scanf("%s", angka); getchar();
    for(int i = 0, j = n-1; j >= 0; i++, j--){
        if(!isdigit(angka[i])){
            counter = -1;
            break;
        }
        if(angka[i] == angka[j]){
            counter++;
        }
    }
    // printf("%d\n", counter);
    if(counter == n){
        printf("Yes\n");
    }
    else if (counter == -1){
        printf("Not valid\n");
    }
    else{
        printf("No\n");
    }


    return 0;
}
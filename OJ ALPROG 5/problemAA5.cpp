#include <stdio.h>

int main(){

    int n, a[5005], counter = 0;

    scanf("%d", &n); getchar();
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]); getchar();
    }
    for(int i = 0; i < n; i++){
        int cek = 1;
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){
                cek = 0;
                break;
            }
        }
        if(cek == 1){
            counter++;
        }
    }
    printf("%d\n", counter);

    return 0;
}
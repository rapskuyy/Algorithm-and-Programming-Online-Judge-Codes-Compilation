#include <stdio.h>

int main(){

    int t, n, k, counter, flag1, flag2, counter1;
    char lorong[10001];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        flag1 = 0; flag2 = 0;
        counter = 0;
        counter1 = 0;
        scanf("%d %d", &n, &k); getchar();
        scanf("%s", lorong); getchar();
        for(int j = 0; j < n; j++){
            if(lorong[j] == '1'){
                counter1++;
            }
        }
        for(int j = 0; j < n; j++){
            if(lorong[j] == '0'){
                counter++;
            }
            if(lorong[j] == '1'){
                counter++;
                if(counter > k){
                    flag1 = -1;
                    break;
                }
                else{
                    break;
                }
            }
        }
        counter = 0;
        for(int j = n - 1; j >= 0; j--){
            if(lorong[j] == '0'){
                counter++;
            }
            if(lorong[j] == '1'){
                counter++;
                if(counter > k){
                    flag2 = -1;
                    break;
                }
                else{
                    break;
                }
            }
        }
        printf("Case #%d: ", i);
        if(flag1 == -1 || flag2 == -1 || counter1 <= 1){
            printf("Dead\n");
        }
        else{
            printf("Alive\n");
        }

    }


    return 0;
}
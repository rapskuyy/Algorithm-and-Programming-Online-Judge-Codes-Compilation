#include <stdio.h>
#include <string.h>

int main(){

    int t, count, flag;
    char ip[110];

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%s", ip);
        count = 0;
        flag = 0;
        for(int j = 0; j < strlen(ip); j++){
            if(ip[j] == '.'){
                if(j != 0 && j != strlen(ip) - 1 && ip[j-1] >= '0' && ip[j-1] <= '9' && ip[j+1] >= '0' && ip[j+1] <= '9'){
                    count++;
                }
                else{
                    flag = 1;
                    break;
                }
            }
        }
        printf("Case #%d: ", i);
        if(flag == 0 && count == 5){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
       
    }

    return 0;
}
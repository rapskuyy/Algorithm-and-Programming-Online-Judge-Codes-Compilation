#include <stdio.h>
#include <ctype.h>

int main(){

    int t, n;
    char arr[150], ans[150];

    scanf("%d", &t); getchar();
    for(int i = 1; i <= t; i++){
        int x = 0;
        scanf("%d", &n); getchar();
        scanf("%[^\n]", arr); getchar();
        for(int j = 0; j < n; j++){
            if(isalpha(arr[j]) == 0){
                continue;
            }
            else{
                ans[x] = arr[j];
                x++;
            }
        }
        ans[x] = '\0';
        printf("Case #%d: %s\n", i, ans);
    }

// n$e ve#- rg%&on$ n#ag i've y*o u"up
    return 0;
}
#include <stdio.h>

int counter = 0;

int recursion(int a){
    if(a == 0){
        return 1;
    }
    else if(a == 1){
        return 2;
    }
    else if(a % 5 == 0){
        if(a % 3 == 0){
            counter++;
        }
        return a * 2;
    }
    else{
        if(a % 3 == 0){
            counter++;
        }
        return recursion(a - 1) + a + recursion(a - 2) + a - 2;
    }
}

int main(){
    int t, a, answer;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d", &a);
        answer = recursion(a);
        printf("Case #%d: %d %d\n", i, answer, counter);
        counter = 0;
    }
}
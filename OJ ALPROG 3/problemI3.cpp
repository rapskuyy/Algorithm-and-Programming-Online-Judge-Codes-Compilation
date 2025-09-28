#include <stdio.h>

int main(){
    int t;
    long int a, b, c;

    scanf("%d", &t);
    
    for(int i = 1; i <= t; i++)
    {
        scanf("%ld %ld %ld", &a, &b, &c);
        printf("Case #%d: ", i);
        if(a * b/100 >= c){
            printf("%ld\n", c);
        }
        else{
            printf("%ld\n", a * b/100);
        }
    }

    return 0;
}
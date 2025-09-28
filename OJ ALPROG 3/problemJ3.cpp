#include <stdio.h>

int main(){
    int x, y, z;
    int counter = 0;

    scanf("%d %d %d", &x, &y, &z);

    for(int i = 0; i < 100; i++){
        if(x == y && x == z){
            printf("%d\n", i);
            counter++;
            break;
        }
        x++;
        y--;
    }
    if(counter != 1){
        printf("-1\n");
    }

    return 0;
}
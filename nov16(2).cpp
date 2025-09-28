#include <stdio.h>

// void print(int n){
//     if(n >= 1){
//         print(n-1);
//         printf("%d ", n);
//     }
// }

// int main(){

//     print(5);

//     return 0;
// }

//FIBONACCI

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){

    printf("%d\n", fibonacci());

    return 0;
}
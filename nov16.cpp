#include <stdio.h>

int max(int arr[], int n){
    int maximum = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }
    return maximum;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    // int arr[10] = {9, 25, 40, 28, 21, 56, 44, 36, 100, 22};
    // int n = 10;
    // int hasil = max(arr, n);
    // printf("%d\n", hasil);


    int a = 25, b = 35;
    swap(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}
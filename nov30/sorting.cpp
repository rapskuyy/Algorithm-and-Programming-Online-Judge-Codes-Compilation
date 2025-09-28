#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int angka[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(angka[j] > angka[j+1]){
                swap(&angka[j], &angka[j+1]);
            }
        }
    }
}

void merge(int angka[], int left, int mid, int right){
    int n1, n2;
    n1 = mid - left + 1;
    n2 = right - mid;
    int L[n1], R[n2];
    
    for(int i = 0; i < n1; i++){
        L[i] = angka[left + i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = angka[mid + 1 + i];
    }

    int a = 0, b = 0, c = left;

    while(a < n1 && b < n2){
        if(L[a] <= R[b]){
            angka[c] = L[a];
            a++;
            c++;
        }
        else{
            angka[c] = R[b];
            b++;
            c++;
        }
    }

    while(a < n1){
        angka[c] = L[a];
        a++;
        c++;
    }

    while(b < n2){
        angka[c] = R[b];
        b++;
        c++;
    }

}

void mergeSort(int angka[], int left, int right){
    if(left < right){
        int mid = (left + right) / 2;
        mergeSort(angka, left, mid);
        mergeSort(angka, mid + 1, right);
        merge(angka, left, mid, right);
    }
}

void print(int angka[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", angka[i]);
    }
    printf("\n");
}

int main(){

    int angka[10] = {17, 28, 30, 40, 18, 2, 100, 55, 47, 29};
    int size = sizeof(angka) / sizeof(angka[0]);

    // bubbleSort(angka, size);
    // print(angka, size);

    mergeSort(angka, 0, size - 1);
    print(angka, size);

    return 0;
}
#include <stdio.h>

void merge(long long int arr[], int left, int right, int mid){
	int lengthL = mid - left + 1;
	int lengthR = right - mid;
	long long int arrL[lengthL], arrR[lengthR];
	int idxL = 0, idxR = 0, idxM = left;
	
	for(int i = 0; i < lengthL; i++){
		arrL[i] = arr[left + i];
	}
	
	for(int i = 0; i < lengthR; i++){
		arrR[i] = arr[mid + 1 + i];
	}
	
	while(idxL < lengthL && idxR < lengthR){
		if(arrL[idxL] < arrR[idxR]){
			arr[idxM] = arrL[idxL];
			idxM++; idxL++;
		}
		else{
			arr[idxM] = arrR[idxR];
			idxM++; idxR++;
		}
	}
	
	while(idxL < lengthL){
		arr[idxM] = arrL[idxL];
		idxM++; idxL++;
	}
	
	while(idxR < lengthR){
		arr[idxM] = arrR[idxR];
		idxM++; idxR++;
	}
}

void mergeSort(long long int arr[], int left, int right){
	int mid = (left + right) / 2;
	if(left >= right){
		return;
	}
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	merge(arr, left, right, mid);
}


int main(){
    int size;
    scanf("%d", &size);
    long long int angka[size];
    for(int i=0 ; i<size ; i++){
        scanf("%lld", &angka[i]);
    }
    mergeSort(angka, 0, size-1);
    int mid = (size/2) + 1;

    for(int i = mid ; i < size ; i++){
        if(i == size-1)
            printf("%d\n", angka[i]);
        else
            printf("%d ", angka[i]);
    }
    
}

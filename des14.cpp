#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void merge(int arr[], int left, int right, int mid){
	int lengthL = mid - left + 1;
	int lengthR = right - mid;
	int arrL[lengthL], arrR[lengthR];
	int idxL = 0, idxR = 0, idxM = left;
	
	for(int i = 0; i < lengthL; i++){
		arrL[i] = arr[left + i];
	}
	
	for(int i = 0; i < lengthR; i++){
		arrR[i] = arr[mid + 1 + i];
	}
	
	while(idxL < lengthL && idxR < lengthR){
		if(arrL[idxL] > arrR[idxR]){
			arr[idxM] = arrR[idxR];
			idxR++;
			idxM++; 
		}
		else{
			arr[idxM] = arrL[idxL];
			idxL++;
			idxM++;
		}
	}
	
	while(idxL < lengthL){
		arr[idxM] = arrL[idxL];
		idxL++;
		idxM++;
	}
	
	while(idxR < lengthR){
		arr[idxM] = arrR[idxR];
		idxR++;
		idxM++; 	
	}
	
}

void mergeSort(int arr[], int left, int right){
	int mid = (left + right) / 2;
	if(left >= right){
		return;
	}
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	merge(arr, left, right, mid);
}

void selectionSort(int arr[], int n){
	int min_idx;
	for(int i = 0; i < n - 1; i++){
		min_idx = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
			}
		}
		swap(&arr[i], &arr[min_idx]);
	}
}

void insertionSort(int arr[], int n){
	int key, j;
	for(int i = 1; i < n; i++){
		key = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void printAll(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[] = {41, 23, 12, 44, 59, 28, 100, 21, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
//	insertionSort(arr, n);
//	selectionSort(arr, n);
	mergeSort(arr, 0, n - 1);
	printAll(arr, n);
	
	return 0;
}	

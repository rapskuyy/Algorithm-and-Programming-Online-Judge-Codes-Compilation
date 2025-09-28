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
	if(left >= right) return;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	merge(arr, left, right, mid);
}

int search(long long int arr[], int n, long long int y){
	int counter = 0;
	for(int i = 0; i < n; i++){
		if(y - arr[i] >= 0){
			counter++;
			y -= arr[i];
		}
	}
	
	return counter;
}

int main(){
	
	int n, counter;
	long long int arr[101], y;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%lld", &arr[i]);
	}
	scanf("%lld", &y);
	mergeSort(arr, 0, n - 1);
	counter = search(arr, n, y);
	printf("%d\n", counter);
	
	return 0;
}

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

void mergeSort(long long int arr[], int left, int right){
	int mid = (left + right) / 2;
	if(left >= right){
		return;
	}
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	merge(arr, left, right, mid);
}

void compare(long long int arr[], int n){
	int length, count = 0;
	for(int i = 0; i < n - 1; i++){
		if(arr[i + 1] - arr[i] > length){
			length = arr[i + 1] - arr[i];
		}
	}
	for(int i = 0; i < n - 1; i++){
		if(arr[i + 1] - arr[i] == length && count == 0){
			printf("%lld %lld", arr[i], arr[i + 1]);
			count = 1;
		}
		else if(arr[i + 1] - arr[i] == length && count != 0){
			printf(" %lld %lld", arr[i], arr[i + 1]);
		}
	}
}

int main(){
	
	int n;
	scanf("%d", &n); getchar();
	long long int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%lld", &arr[i]); getchar();
	}
	
	mergeSort(arr, 0, n - 1);
	compare(arr, n);
	printf("\n");
	
	
	return 0;
}

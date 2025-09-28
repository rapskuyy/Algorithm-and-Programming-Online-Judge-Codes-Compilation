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

int find(long long int arr[], int t){
	long long int answerLeft = 0, answerRight = 0;
	int mid = t / 2;
	for(int i = 1; i < mid; i++){
		if((arr[i] - arr[i - 1]) >= answerLeft){
			answerLeft = arr[i] - arr[i - 1];
		}
	}
	for(int i = mid + 1; i < t; i++){
		if((arr[i] - arr[i - 1] ) >= answerRight){
			answerRight = arr[i] - arr[i - 1];
		}
	}
	if(answerLeft < answerRight){
		return answerRight;
	}
	else{
		return answerLeft;
	}
}

int main(){
	
	int n, t;
	long long int arr[501];
	
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &t);
		for(int j = 0; j < t; j++){
			scanf("%lld", &arr[j]);
		}
		mergeSort(arr, 0, t - 1);
		printf("Case #%d: %d\n", i, find(arr, t));
	}

	return 0;
}

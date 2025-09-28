#include <stdio.h>

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

void mergeSort(int arr[], int left, int right){
	int mid = (left + right) / 2;
	if(left >= right) return;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	merge(arr, left, right, mid);
}

int search(int mmr[], int n, int f){
	for(int i = 0; i < n; i++){
		if(mmr[i] == f){
			return i;
		}
	}
	
	return -1;
}

int main(){
	
	int t, n, mmr[1001], f, idx;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		for(int j = 0; j < n; j++){
			scanf("%d", &mmr[j]);
		}
		scanf("%d", &f);
		mergeSort(mmr, 0, n - 1);
		idx = search(mmr, n, f);
		printf("CASE #%d:", i);
		if(idx == -1){
			printf(" -1 -1");
		}
		else if(idx == (n - 1)){
			printf(" %d %d", mmr[idx - 1], mmr[idx]);
		}
		else{
			printf(" %d %d", mmr[idx], mmr[idx + 1]);	
		}
		printf("\n");
	}
	
	return 0;
}

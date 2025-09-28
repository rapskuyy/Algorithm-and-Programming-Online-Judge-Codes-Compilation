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

int binarySearch(long long int arr[], int low, int high, int find){
    while(low <= high){
        int mid = (low+high) / 2;
        if(arr[mid]==find){
            return mid;
        }
        else if(arr[mid]<find){
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}


int main(){
    int size, n;
    scanf("%d", &size);
    getchar();
    long long int angka[size];
    for(int i=0 ; i<size ; i++){
        scanf("%lld", &angka[i]);
    }
    mergeSort(angka, 0, size-1);
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++){
        int whatToSearch;
        scanf("%d", &whatToSearch);
        int hs = binarySearch(angka, 0, size, whatToSearch);
        if(hs == -1){
            printf("%d\n", hs);
        }
        else{
            printf("%d\n", hs + 1);
        }
    }
}


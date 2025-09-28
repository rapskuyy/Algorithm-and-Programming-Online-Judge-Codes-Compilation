#include <stdio.h>

long long int search(long long int arr[], long long int q, long long int left, long long int right){
	while(left <= right){
		long long int mid = (left + right) /  2;
		if(q == arr[mid]){
			for(long long int i = left; i < mid; i++){
				if(q == arr[i]){
					return i + 1;
				}
			}
			return mid + 1;
		}
		else if(q > arr[mid]){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	return -1;
}

int main(){
	
	long long int n, m, a[100001], q[100001];
	
	scanf("%lld %lld", &n, &m);
	for(long long int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	for(long long int i = 0; i < m; i++){
		scanf("%lld", &q[i]);
	}
	for(long long int i = 0; i < m; i++){
		printf("%lld\n", search(a, q[i], 0, n - 1));
	}
	
	return 0;
}

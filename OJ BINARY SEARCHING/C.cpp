#include <stdio.h>

long long int search(long long int arr[], long long int left, long long int right, long long int m){
	long long int idx = -1;
	while(left <= right){
		long long int mid = (left + right) / 2;
		if(arr[mid] <= m){
			idx = mid + 1;
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	
	return idx;
}

int main(){
	
	long long int n, arr[100000], q, m, ans;
	
	scanf("%lld", &n);
	for(long long int i = 0; i < n; i++){
		scanf("%lld", &arr[i]);
		if(i != 0){
			arr[i] += arr[i - 1];
		}
	}
	scanf("%lld", &q);
	for(long long int i = 1; i <= q; i++){
		scanf("%lld", &m);
		ans = search(arr, 0, n - 1, m);
		printf("Case #%lld: %lld\n", i, ans);
	}
	
	return 0;
}

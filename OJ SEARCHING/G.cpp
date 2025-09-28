#include <stdio.h>

long long int search(long long int arr[], long long int n, long long int k){
	long long int ans = 0;
	for(long long int i = 0; i < n; i++){
		if(arr[i] >= k){
			ans++;
		}
	}
	
	return ans;
}

int main(){
	
	int t;
	long long int n, k, ans, arr[10001];
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%lld %lld", &n, &k);
		for(long long int j = 0; j < n; j++){
			scanf("%lld", &arr[j]);
		}
		ans = search(arr, n, k);
		printf("Case #%d: %lld\n", i, ans);
	}
	
	return 0;
}

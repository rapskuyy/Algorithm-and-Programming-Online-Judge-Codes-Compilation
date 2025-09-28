#include<stdio.h>

long long int search(long long int arr[], long long int n, long long int m){
	long long int max = 0;
	for(long long int i = 0; i < n; i++){
		long long int counter = 0;
		long long int total = 0;
		int j = i;
		while(j < n){
			total += arr[j];
			if(total > m){
				break;
			}
			else if(total <= m){
				counter++;
			}
			j++;
		}
		if(counter > max){
			max = counter;
		}
	}
	
	return max;
}

int main(){
	
	long long int t, n, m, arr[10001];
	
	scanf("%lld", &t);
	for(long long int i = 1; i <= t; i++){
		scanf("%lld %lld", &n, &m);
		for(int j = 0; j < n; j++){
			scanf("%lld", &arr[j]);
		}
		
		long long int ans = search(arr, n, m);

		printf("Case #%lld: ", i);
		if(ans == 0){
			printf("-1\n");
		}
		else{
			printf("%lld\n", ans);
		}
	}	
	
	
	return 0;
}

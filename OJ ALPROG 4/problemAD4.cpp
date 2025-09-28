#include <stdio.h>

int main(){

	int n, arr[5000], temp, max = 0;

	for(int i = 0; i <= 1001; i++){
		arr[i] = 0;
	}

	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &temp);
		arr[temp]++;
	}
	for(int i = 1; i <= 1001; i++){
		if(max <= arr[i]){
			max = arr[i];
		}
	}
	printf("%d\n", max);

	return 0;
}
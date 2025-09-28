#include<stdio.h>

void tree(int arr[], int len, int idx, int ans){
	
	if(arr[idx] == -1){
		return;
	}
	
	if(idx > len || 2 * idx > len){
		printf("%d\n", ans);
		ans = arr[1];
		arr[idx] = -1;
		idx = 1;
		return;
	}
	
	tree(arr, len, 2 * idx, ans + arr[2 * idx]);
	
	if(2 * idx + 1 > len){
		return;
	}
	
	tree(arr, len, 2 * idx + 1, ans + arr[2 * idx + 1]);
}

int main(){

	int t, len, arr[101];
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		arr[0] = {0};
		scanf("%d", &len);
		for(int j = 1; j <= len; j++){
			scanf("%d", &arr[j]);
		}
		printf("Case #%d:\n", i);
		tree(arr, len, 1, arr[1]);
	}
	
	return 0;
}

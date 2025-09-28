#include <stdio.h>

int main(){
	
	int t, n, a, temp;
	int angka[101];
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		for(int j = 1; j <= 100; j++){
			angka[j] = 0;
		}
		scanf("%d", &n);
		for(int j = 0; j < n; j++){
			scanf("%d", &a);
			angka[a]++;
		}
		for(int j = 1; j <= 100; j++){
			if(angka[j] > 0){
				temp = angka[j];
			}
		}
		printf("Case #%d: %d\n", i, temp);
	}
	
	
	return 0;
}

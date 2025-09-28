#include <stdio.h>

void search(int angka[], int hapus, int n){
	for(int i = 0; i < n; i++){
		if(angka[i] == hapus){
			angka[i] = '\0';
		}
	}
}

int main(){
	
	int n, m, angka[1000], hapus, ans = 0;

	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%d", &angka[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &hapus);
		search(angka, hapus, n);
	}
	for(int i = 0; i < n; i++){
		if(ans < angka[i]){
			ans = angka[i];
		}
	}
	
	if(ans == 0){
		printf("Maximum number is -1\n");
	}
	else{
		printf("Maximum number is %d\n", ans);	
	}
	
	return 0;
}

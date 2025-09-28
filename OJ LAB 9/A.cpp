#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

	int n;
	
	scanf("%d", &n); getchar();
	for(int i = 1; i <= n; i++){
		char arr[1010];
		scanf("%[^\n]", arr); getchar();
		printf("Case #%d: ", i);
		for(int j = 0; j < strlen(arr); j++){
			char huruf = tolower(arr[j]);
			if(huruf != 'a' && huruf != 'i' && huruf != 'u' && huruf != 'e' && huruf != 'o'){
				printf("%c", arr[j]);
			}
		}
		printf("\n");
	}	
	
	
	return 0;
}

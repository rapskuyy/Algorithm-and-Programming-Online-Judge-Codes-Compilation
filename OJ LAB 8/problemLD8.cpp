#include <stdio.h>
#include <string.h>

int search(char shortW[300][300], int n, char find[300]){
	for(int i = 0; i < n; i++){
		if(strcmp(find, shortW[i]) == 0) return i;
	}
	return -1;
}

int main(){
	
	FILE *fptr = fopen("testdata.in", "r");
	int n;
	
	fscanf(fptr, "%d\n", &n);
	
	char shortW[300][300], longW[300][300];
	
	for(int i = 0; i < n; i++){
		fscanf(fptr,"%[^#]#%s\n", shortW[i], longW[i]);
	}
	
	int testCase;
	fscanf(fptr,"%d\n", &testCase);
	
	char sentence[300];
	for(int i = 0; i < testCase; i++){
		fscanf(fptr,"%[^\n]\n", sentence);
		char fulls[300][300];
		int temp = 0;
		char *token = strtok(sentence," ");
		while(token != NULL){
			int index = search(shortW, n, token);
			if(index != -1){
				strcpy(fulls[temp], longW[index]);
			}
			else if(index == -1){
				strcpy(fulls[temp], token);
			}
			temp++;
			token = strtok(NULL," ");
		}
		printf("Case #%d:\n", i +1);
		for(int j = 0; j < temp; j++){
			if(j < temp - 1){
				printf("%s ", fulls[j]);	
			}
			else{
				printf("%s", fulls[j]);	
			}
		}
		printf("\n");
	}
	fclose(fptr);
	
	return 0;
}

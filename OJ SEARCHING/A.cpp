#include <stdio.h>
#include <string.h>

int wordSearch(char shortW[500][500], char search[500], int qWord){
	for(int i = 0; i < qWord; i++){
		if(strcmp(search, shortW[i]) == 0){
			return i;
		}
	}
	
	return -1;
}

int main(){
	
	int qWord, qSentence;
	char shortW[500][500], longW[500][500];
	
	char sentence[500], answer[500][500], *token;
	int temp, idx;
	
	FILE *fptr = fopen("testdata.in", "r");
	
	fscanf(fptr, "%d\n", &qWord);
	
	for(int i = 0; i < qWord; i++){
		fscanf(fptr, "%[^#]#%s\n", shortW[i], longW[i]);
	}
	
	fscanf(fptr, "%d\n", &qSentence);
	
	for(int i = 0; i < qSentence; i++){
		fscanf(fptr, "%[^\n]\n", sentence);
		temp = 0;
		token = strtok(sentence, " ");
		while(token != NULL){
			idx = wordSearch(shortW, token, qWord);
			if(idx == -1){
				strcpy(answer[temp], token);
			}
			else{
				strcpy(answer[temp], longW[idx]);
			}
			temp++;
			token = strtok(NULL, " ");
		}
		printf("Case #%d:\n", i + 1);
		for(int j = 0; j < temp; j++){
			if(j < temp - 1){
				printf("%s ", answer[j]);
			}
			else{
				printf("%s", answer[j]);
			}
		}
		printf("\n");
	}
	
	fclose(fptr);
	
	return 0;
}

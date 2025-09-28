#include <stdio.h>
#include <string.h>

struct Data{
	char title[1001];
	char artist[1001];
	int views;
};

void swap(Data *a, Data *b){
	Data temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(Data dataList[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(dataList[j].views < dataList[j+1].views){
				swap(&dataList[j], &dataList[j+1]);
			}
			else if(dataList[j].views == dataList[j+1].views && strcmp(dataList[j].title, dataList[j+1].title) > 0){
				swap(&dataList[j], &dataList[j+1]);
			}
		}
	}
}

int main(){
	
	FILE *fptr = fopen("testdata.in", "r");
	struct Data dataList[102];
	int i = 0;
	
	while(!feof(fptr)){
		fscanf(fptr, "%[^#]#%[^#]#%d\n", dataList[i].title, dataList[i].artist, &dataList[i].views);
		i++;
	}
	
	fclose(fptr);
	
	bubbleSort(dataList, i);
	
	for(int j = 0; j < i; j++){
		printf("%s by %s - %d\n", dataList[j].title, dataList[j].artist, dataList[j].views);
	}
	
	return 0;
}

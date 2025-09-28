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

void bubbleSort(Data data[], int i){
	for(int j = 0; j < i - 1; j++){
		for(int k = 0; k < i - j - 1; k++){
			if(data[k].views < data[k + 1].views){
				swap(&data[k], &data[k + 1]);
			}
			else if(data[k].views == data[k + 1].views && strcmp(data[k].title, data[k + 1].title) > 0){
				swap(&data[k], &data[k + 1]);
			}	
		}
	}
}

int main(){
	
	Data data[101];
	int i = 0;
	
	FILE *fptr = fopen("testdata.in", "r");
	
	while(!feof(fptr)){
		fscanf(fptr, "%[^#]#%[^#]#%d\n", data[i].title, data[i].artist, &data[i].views);
		i++;
	}
	
	fclose(fptr);
	
	bubbleSort(data, i);
	
	for(int j = 0; j < i; j++){
		printf("%s by %s - %d\n", data[j].title, data[j].artist, data[j].views);
	}
	
	return 0;
}

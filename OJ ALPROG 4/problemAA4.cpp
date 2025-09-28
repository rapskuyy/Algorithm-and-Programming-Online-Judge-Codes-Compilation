#include <stdio.h>

int main(){
	
	int turn, dadu[2000], total[2000];
	
	scanf("%d", &turn);
	for(int i = 1; i <= turn; i++){
		scanf("%d", &dadu[i]);
		total[0] = 0;
		total[i] = total[i - 1] + dadu[i];
		if(total[i] == 9){
			total[i] = 21;
		}
		if(total[i] == 33){
			total[i] = 42;
		}
		if(total[i] == 76){
			total[i] = 92;
		}
		if(total[i] == 53){
			total[i] = 37;
		}
		if(total[i] == 80){
			total[i] = 59;
		}
		if(total[i] == 97){
			total[i] = 88;
		}
	}
	
	printf("%d\n", total[turn]);
	
	return 0;
}

#include <stdio.h>

void floodfillW(int board[9][9], int x, int y, int step, int count){
	
	if(x < 0 || y < 0 || x > 8 || y > 8  || count > step || board[x][y] > 1){
		return;
	}
	
	board[x][y]++;

	floodfillW(board, x+2, y+1, step, count+1);
	floodfillW(board, x+2, y-1, step, count+1);
	floodfillW(board, x-2, y+1, step, count+1);
	floodfillW(board, x-2, y-1, step, count+1);
	
	floodfillW(board, x-1, y+2, step, count+1);
	floodfillW(board, x+1, y+2, step, count+1);
	floodfillW(board, x-1, y-2, step, count+1);
	floodfillW(board, x+1, y-2, step, count+1);

}

void floodfillB(int board[9][9],int x, int y, int step, int count){
	
	if(x < 0 || y < 0 || x > 8 || y > 8  || count > step || board[x][y] == 1){
		return;
	}
	
	board[x][y]++;
	
	floodfillB(board, x+2, y+1, step, count+1);
	floodfillB(board, x+2, y-1, step, count+1);
	floodfillB(board, x-2, y+1, step, count+1);
	floodfillB(board, x-2, y-1, step, count+1);
	
	floodfillB(board, x-1, y+2, step, count+1);
	floodfillB(board, x+1, y+2, step, count+1);
	floodfillB(board, x-1, y-2, step, count+1);
	floodfillB(board, x+1, y-2, step, count+1);
}



int main(){
	
	int board[9][9];
	int t, step, x1, y1, x2, y2;
	char a, b;
	
	scanf("%d",&t); getchar();
	for(int i = 1 ; i <= t ; i++){
		for(int j = 0 ; j < 9; j++){
			for(int k = 0 ; k < 9 ; k++){
				board[j][k] = 0;
			}
		}
		int flag = 0;
		scanf("%d", &step); getchar();
		scanf("%c%d %c%d", &a, &y1, &b, &y2); getchar();
		x1 = a -'A' ;
		x2 = b - 'A';
		y1--;
		y2--;
	
		floodfillB(board, x1, y1, step, 0);
		floodfillW(board, x2, y2, step, 0);

		for(int j = 0 ; j < 9; j++){
			for(int k = 0 ; k < 9 ; k++){
				if(board[j][k] > 1){
					flag = 1;
					break;	
				} 
			}
		}
		printf("Case #%d: ", i);
		if(flag == 1){
			printf("YES\n");
		}else if(flag == 0){
			printf("NO\n");
		}
	}
	
	return 0;
}

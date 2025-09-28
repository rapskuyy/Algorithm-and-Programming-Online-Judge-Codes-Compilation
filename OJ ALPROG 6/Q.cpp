#include <stdio.h>

void floodfill(int board[9][9], int x, int y, int x2, int y2, int step, int *temp){
	
	if(x < 0 || y < 0 || x > 8 || y > 8 || step > *temp){
		return;
	}
	if(x == x2 && y == y2){
		*temp = step;
		return;
	}
	
	board[x][y]++;

	floodfill(board, x+2, y+1, x2, y2, step+1, temp);
	floodfill(board, x+2, y-1, x2, y2, step+1, temp);
	floodfill(board, x-2, y+1, x2, y2, step+1, temp);
	floodfill(board, x-2, y-1, x2, y2, step+1, temp);
	
	floodfill(board, x-1, y+2, x2, y2, step+1, temp);
	floodfill(board, x+1, y+2, x2, y2, step+1, temp);
	floodfill(board, x-1, y-2, x2, y2, step+1, temp);
	floodfill(board, x+1, y-2, x2, y2, step+1, temp);

	board[x][y] = 0;
}

int main(){
	
	int board[9][9];
	int t, x1, y1, x2, y2;
	char a, b;
	scanf("%d",&t); getchar();
	for(int i = 1 ; i <= t ; i++){
		for(int j = 0 ; j < 9; j++){
			for(int k = 0 ; k < 9 ; k++){
				board[j][k] = 0;
			}
		}
		scanf("%c%d %c%d", &a, &y1, &b, &y2); getchar();
		x1 = a -'A' ;
		x2 = b - 'A';
		y1--;
		y2--;
		int temp = 6;
		floodfill(board, x1, y1, x2, y2, 0, &temp);
		printf("Case #%d: %d\n", i, temp);
		temp = 6;
	}
	
	return 0;
}

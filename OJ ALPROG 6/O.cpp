#include <stdio.h>

void floodfill(char board[101][101], int x, int y, int n, int m, int *count){
	if(x < 0 || y < 0 || x >= n || y >= m || board[x][y] == '#' || board[x][y] == 'Y'){
		return;
	}
	if(board[x][y] == '*'){
		(*count)++;
	}
	
	board[x][y] = 'Y';
	
	floodfill(board, x+1, y, n, m, count);
	floodfill(board, x, y+1, n, m, count);
	floodfill(board, x-1, y, n, m, count);
	floodfill(board, x, y-1, n, m, count);	
}

int main(){
	
	int t, n, m, x, y;
	char board[101][101];
	
	scanf("%d", &t); getchar();
	for(int i = 1; i <= t; i++){
		scanf("%d %d", &n, &m); getchar();
		int count = 0;
		for(int j = 0; j < n; j++){
			for(int k = 0; k < m; k++){
				scanf("%c", &board[j][k]);
				if(board[j][k] == 'P'){
					x = j;
					y = k;
				}
			}
			getchar();
		}
		floodfill(board, x, y, n, m, &count);			
		printf("Case #%d: %d\n", i, count);
	}
	
	return 0;
}

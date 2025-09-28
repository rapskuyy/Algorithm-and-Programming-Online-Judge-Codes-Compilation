// #include <stdio.h>

// int rowCheck(int board[9][9]){
//     int check[10] = {0};
//     for(int i = 0; i < 9; i++){
//         for(int j = 0; j < 9; j++){
//             check[board[i][j]]++;
//         }
//         for(int k = 1; k <= 9; k++){
//             if(check[k] != 1){
//                 return 0;
//             }
//         }
//         for(int k = 1; k <= 9; k++){
//             check[k] = 0;
//         }
//     }
//     return 1;
// }

// int coloumnCheck(int board[9][9]){
//     int check[10] = {0};
//     for(int i = 0; i < 9; i++){
//         for(int j = 0; j < 9; j++){
//             check[board[j][i]]++;
//         }
//         for(int k = 1; k <= 9; k++){
//             if(check[k] != 1){
//                 return 0;
//             }
//         }
//         for(int k = 1; k <= 9; k++){
//             check[k] = 0;
//         }
//     }
//     return 1;
// }

// int boxCheck(int board[9][9]){
//     int check[10] = {0};
//     for(int m = 0; m < 9; m += 3){
//         for(int n = 0; n < 9; n += 3){
//             for(int i = m; i < m + 3; i++){
//                 for(int j = n; j < n + 3; j++){
//                     check[board[i][j]]++;
//                 }
//             }
//             for(int k = 1; k <= 9; k++){
//                     if(check[k] != 1){
//                         return 0;
//                     }
//                 }
//             for(int k = 1; k <= 9; k++){
//                 check[k] = 0;
//             }
//         }
//     }
//     return 1;
// }

// int main(){
//     int t, winrateSum = 0, board[9][9];
//     double winrate;

//     scanf("%d", &t);
//     for(int i = 1; i <= t; i++){
//         for(int j = 0; j < 9; j++){
//             for(int k = 0; k < 9; k++){
//                 scanf("%d", &board[j][k]);
//             }
//         }
//         if(rowCheck(board) == 1 && coloumnCheck(board) == 1 && boxCheck(board) == 1){
//             printf("Case #%d: TRUE\n", i + 1);
//             winrateSum++;
//         }
//         else{
//             printf("Case #%d: FALSE\n", i + 1);
//         }
//     }
//     winrate = (double(winrateSum)*100.0) / double(t);
//     printf("%.2lf%%\n", winrate);

//     return 0;
// }

#include <stdio.h>
int i, j, m, b, k; 
int rowCheck(int boardSudoku[9][9]) {
		int c[10]={0};
		for (i=0;i<9;i++) {
			for (j=0;j<9;j++) {
				c[boardSudoku[i][j]]++;
			}
		for (k=1;k<=9;k++) {
			if (c[k]!=1) {
				return 0;
			}		
		}
		for (k=1;k<=9;k++) {
			c[k]=0;
		}
	}
	return 1;
}
int colCheck (int boardSudoku[9][9]) {
	int c[10]={0};
	for (i=0;i<9;i++) {
		for (j=0;j<9;j++) {
			c[boardSudoku[j][i]]++;
		}
		for (k=1;k<=9;k++) {
			if (c[k]!=1) {
				return 0;
			}		
		}
		for (k=1;k<=9;k++) {
			c[k]=0;
		}
	}
	return 1;
}
int cubeCheck (int boardSudoku[9][9]) {
	int c[10] = {0}, count =0;
	for (m=0;m<9;m+=3) {
		for (b=0;b<9;b+=3) {
			for (i=m;i<m+3;i++) {
				for(j=b;j<b+3;j++) {
					c[boardSudoku[i][j]]++;
				}
			}
			count++;
			for (k=1;k<=9;k++) {
			if (c[k]!=1) {
				return 0;
				}		
			}
			for (k=1;k<=9;k++) {
					c[k]=0;
			}	
		}
	}
	return 1;
}
int main () {
	int t, winratec=0;
	double winrate;
	scanf ("%d", &t);
	
	for (int i=1;i<=t;i++) {
		int boardSudoku[9][9];
		for (int i=0;i<9;i++) {
			for (int j=0;j<9;j++) {
				scanf ("%d", &boardSudoku[i][j]);
			}
		}
		
		if (rowCheck(boardSudoku)==1 && colCheck(boardSudoku)==1 && cubeCheck(boardSudoku)==1) {
			printf ("Case #%d: TRUE\n", i);
		}
		else {
			printf ("Case #%d: FALSE\n", i);
		}
//		if (i<t) {
//			printf ("\n");
//		}
		if (rowCheck(boardSudoku)==1 && colCheck(boardSudoku)==1 && cubeCheck(boardSudoku)==1) {
			winratec++;
		}
		else {
			winratec+=0;
		}
		}
		winrate=(double (winratec)*100)/double (t);
		printf ("%.2lf%%\n", winrate);
	
	return 0;
}
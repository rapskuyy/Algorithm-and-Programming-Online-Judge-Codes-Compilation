#include <stdio.h>

void displayMap(char d[][101], int a) {
	for (int i = 0; i < a; i++) {
		printf("%s\n", d[i]);
	}
	puts("");
}

void ty(char d[][101], int y, int x) {
	if (d[y][x] == '#') d[y][x] = 'G';
}

void spreadFire(char d[][101], int b, int a) {
	if (b <= 1) return;
	for (int y = 0; y < a; y++) {
		for (int x = 0; x < a; x++) {
			if (d[y][x] == 'F') {
				if (y-1 >= 0) ty(d, y-1, x);
				if (y+1 < a) ty(d, y+1, x);
				if (x-1 >= 0) ty(d, y, x-1);
				if (x+1 < a) ty(d, y, x+1);
				
				if (y-1 >= 0 && x+1 < a) ty(d, y-1, x+1);
				if (y+1 < a && x+1 < a) ty(d, y+1, x+1);
				if (y+1 < a && x-1 >= 0) ty(d, y+1, x-1);
				if (y-1 >= 0 && x-1 >= 0) ty(d, y-1, x-1);

				
			}	
		}
	}
	
	for (int y = 0; y < a; y++) {
		for (int x = 0; x < a; x++) { 
			if (d[y][x] == 'G') d[y][x] = 'F';
		}
	}
	
	spreadFire(d, --b, a);
}

int main() {
	
	FILE *fptr;
	fptr = fopen("testdata.in", "r");
	
	int a, b, c;
	
	fscanf(fptr, "%d", &a);
	for (int i = 1; i <= a; i++) {
		char d[100][101] = {0};
		fscanf(fptr, "%d %d", &b, &c);
		
		for (int j = 0; j < b; j++) {
			fscanf(fptr, "%s\n", d[j]);
		}
		
		spreadFire(d, c, b);
		
		printf("Case #%d:\n", i);
		displayMap(d, b);
	}
	
	
	
	return 0;
}

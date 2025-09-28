#include <stdio.h>

int main(){
	
	int t, r, h;
	
	scanf("%d", &t); getchar();
	for(int i = 1; i <= t; i++){
		scanf("%d %d", &r, &h);
		double surar = double(2.0 * 3.14 * r * (r +  h));
		printf("Case #%d: %.2lf\n", i, surar);
	}
	
	return 0;
}

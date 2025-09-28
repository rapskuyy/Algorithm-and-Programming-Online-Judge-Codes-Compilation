#include <stdio.h>

double search(double left, double right, double m){
	double ans;
	while(left <= right){
		long long mid = (left + right) / 2;
		double targetSum = (mid * (mid + 1.0) * (2.0 * mid + 1.0) / 6.0);
		
		if(targetSum >= m){
			ans = mid;
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	return ans;
}

int main(){
	
	int t;
	double m, max = 1e18;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%lf", &m);
		printf("Case #%d: %.0lf\n", i, search(0, max + 1, m));
	}
	
	return 0;
}

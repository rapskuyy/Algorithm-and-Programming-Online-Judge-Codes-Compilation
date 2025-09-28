#include <stdio.h>

long long int factorial(long long int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    long long int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
        result %= 1000000007;
    }

    return result;
}


int main(){
	
	long long int t, n, a;
	long long int hasil;
	
	scanf("%lld", &t);
	for(int i = 1; i <= t; i++){
		hasil = 1;
		scanf("%lld", &n);
		for(int j = 0; j < n; j++){
			scanf("%lld", &a);
			hasil *= factorial(a);
			hasil %= 1000000007;
		}
		printf("Case #%d: %lld\n", i, hasil);
	}
	
	
	return 0;
}


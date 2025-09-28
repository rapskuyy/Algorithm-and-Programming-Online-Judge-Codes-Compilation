#include <stdio.h>

int search(long long int arr[], long long int n, long long int m) {
    long long int currSum = 0;
    int size = -1;

    for(int left = 0, right = 0; right < n; right++) {
        currSum += arr[right];
        while (currSum > m && left <= right) {
            currSum -= arr[left];
            left++;
        }
        int currSize = right - left + 1;
        if(size <= currSize){
        	size = currSize;
		}
    }
    return size;
}

int main() {
    int n;
	long long int arr[5001], q, m;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    scanf("%lld", &q);
    for(long long int i = 1; i <= q; i++) {
        scanf("%lld", &m);
        int size = search(arr, n, m);
        printf("Case #%d: ", i);
        if(size == 0){
        	printf("-1\n");
		}
		else{
			printf("%d\n", size);
		}
    }

    return 0;
}

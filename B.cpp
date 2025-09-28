#include <stdio.h>

void merge(int angka[], int left, int mid, int right){
		int n1, n2;
		n1=mid-left+1;
		n2= right-mid;
		
		int L[n1], R[n2];
		for(int i=0; i<n1;i++){
			L[i]=angka[left+i];
		}
		
		for(int i=0; i<n2;i++){
			R[i]=angka[mid+1+i];
		}
			
		int a=0,b=0,c=left;
		while(a<n1 && b<n2){
			if(L[a]<R[b]){
				angka[c]=L[a];
				a++;
				c++;
			}else{
				angka[c]=R[b];
				b++;
				c++;
			}
		}
		
		while(a<n1){
			angka[c]=L[a];
			a++;
			c++;
		}
		
		while(b<n2){
			angka[c]=R[b];
			b++;
			c++;                      
		}
		
	}
void mergesort(int angka[], int left, int right){
 		if(left < right){
 			int mid=(left+right)/ 2;
 				mergesort(angka, left, mid);
 				mergesort(angka, mid+1, right);
 				merge(angka, left,mid, right);
		 }
}


int binarySearch(int a[], int target, int start, int end) {
    int result = -1;
    while (start <= end) {
        int mid = (start + end) / 2;

        if (a[mid] == target) {
            result = mid + 1;
            end = mid - 1;
        } else if (a[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return result;
}

int main() {
    
    int a, q, d[100005], b;
    scanf("%d %d", &a, &q);

    for (int i = 0; i < a; i++) {
        scanf("%d", &d[i]);
    }

    mergesort(d, 0, a-1);

    for (int i = 0; i < q; i++) {
        scanf("%d", &b);
        int p = binarySearch(d, b, 0, a - 1);
        printf("%d\n", p);
    }    

    return 0;
}


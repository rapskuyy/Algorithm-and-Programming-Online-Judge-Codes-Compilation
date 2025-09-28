#include <stdio.h>

int main(){

    // int t, n, count;

    // scanf("%d", &t);
    // for(int i = 1; i <= t; i++){
    //     scanf("%d", &n);
    //     printf("Case #%d: \n", i);
    //     for(int j = 1; j <= n; j++){
    //         count = 0;
    //         for(int k = j; k < n; k++){
    //             printf(" ");
    //             count++;
    //         }
    //         for(int k = 1; k <= j; k++){
    //             if((j + k + count) % 2 == 0)
    //             printf("*");
    //             else{
    //                 printf("#");
    //             }
    //         }
    //     printf("\n");
    //     }
    // }

    // int t, n[1000], count;

    // scanf("%d", &t);
    // for(int i = 1; i <= t; i++){
    //     scanf("%d", &n[i]);
    // }

    // for(int i = 1; i <= t; i++){
    //     printf("Case #%d: \n", i);
    //     for(int j = 1; j <= n[i]; j++){
    //         count = 0;
    //         for(int k = j; k < n[i]; k++){
    //             printf(" ");
    //             count++;
    //         }
    //         for(int k = 1; k <= j; k++){
    //             if((j + k + count) % 2 == 0)
    //             printf("*");
    //             else{
    //                 printf("#");
    //             }
    //         }
    //         printf("\n");
    //     }
    // }

    	int test;
	scanf("%d", &test);
	
	int num[test];
	for(int i=0; i<test; i++){
		scanf("%d", &num[i]);
	}
	for(int i=0; i<test; i++){
		printf("Case #%d:\n", i+1);
		for(int j=0; j<num[i]; j++){
			for(int k=0; k<num[i]; k++){
				if(k<num[i]-1-j){
					printf(" ");
				} else{
					if(j%2 == 0){
						if(k%2 == 0){
							printf("*");
						} else{
							printf("#");
						}
					} else if(j%2 == 1){
						if(k%2 == 1){
							printf("*");
						} else{
							printf("#");
						}
					}
				}
			}
			printf("\n");
		}
	}

    return 0;
}
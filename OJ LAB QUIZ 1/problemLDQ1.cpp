#include <stdio.h>
#include <string.h>

int main(){
    int min, max, counter = 0, arr[10];

    scanf("%d %d", &min, &max);

    for(int i = min; i <= max; i++){
        for(int i = 0; i < 10; i++){
            arr[i] = 0;
        }
        int num = i;
        while(num > 0){
            int mod = num % 10;
            arr[mod]++;
            num /= 10;
        }
        for(int j = 0; j < 10; j++){
            if(arr[j] > 1){
                counter++;
                break;
            }
        }
    }
    printf("%d\n", counter);

    return 0;
}

// #include<stdio.h>
// #include<string.h>

// int main(){
//     int min,max,counter=0;
//     int arr[10];
//     scanf("%d %d",&min,&max);

//     for(int i=min;i<=max;i++){
//         memset(arr,0,sizeof(arr));
//         int num=i;
//         while(num>0){
//             int mod=num%10;
//             arr[mod]++;
//             num/=10;
//     // printf("%d",num);
//         }
//         for(int j=0;j<10;j++){
//             if(arr[j]>1){
//                 counter++;
//                 break;
//             }
//         }
//     }
//     printf("%d\n",counter);
// }
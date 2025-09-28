// #include <stdio.h>

// int main(){

//     int n;

//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         for(int j = i; j < n; j++){
//             printf(" ");
//         }
//         for(int k = 1; k <= i; k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(){

//     int a;

//     scanf("%d", &a);
//     for(int i = 1; i <= a; i++){
//         for(int j = 1; j <= i; j++){
//             if(i == 1 || i == 2 || i == a){
//                 printf("*");
//             }
//             else{
//                 printf("*");
//                 for(int k = 1; k <= i - 2; k++){
//                     printf(" ");
//                 }
//                 printf("*");
//                 break;
//             }    
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(void) {
   
//    int t, counter;
//    char word[25][15];
//    char test;

//    scanf("%d", &t);
//    for(int i = 0; i < t; i++){
//       scanf("%s", word[i]); getchar();
//    }
//    scanf("%c", &test);
   
//    for(int i = 0; i < t; i++){
//       counter = 0;
//       for(int j = 0; j < strlen(word[i]); j++){
//          if(word[i][j] == test){
//             counter++;
//          }
//       }
//       if(counter > 0){
//          printf("%s,", word[i]);
//       }
//    }
   
//    printf("\n");
   
            

//    return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main(void) {
//    char word[55], huruf;
//    int counter = 0;

//    scanf("%c %s", &huruf, word); getchar();
   
//    for(int i = 0; i < strlen(word); i++){
//       if(word[i] == huruf){
//          counter++;
//       }
//    }
   
//    printf("%d %c\'s", counter, huruf);
   

//    return 0;
// }

#include <stdio.h>

int main(void) {

  int t;
  double nums[25], curr;
  
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
     scanf("%lf", &nums[i]); getchar();
  }
  curr = nums[0];
  for(int i = 1; i < t; i++){
     if(curr < nums[i]){
        curr = nums[i];
     }
  }
  
  
  for(int i = 0; i < t; i++){
     printf("%.2lf ", nums[i] / curr);
  }
  printf("\n");

   return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int checkAnagram(char *word1, char *word2){
//     int wordCount1[26] = {0};
//     int wordCount2[26] = {0};
//     int count = 0;
//     int check = 0;

//     for(int i = 0; i < strlen(word1); i++){
//         if(tolower(word1[i]) >= 'a' && tolower(word1[i]) <= 'z'){
//             wordCount1[tolower(word1[i]) - 'a']++;
//         }
//     }
//     for(int i = 0; i < strlen(word2); i++){
//         if(tolower(word2[i]) >= 'a' && tolower(word2[i]) <= 'z'){
//             wordCount2[tolower(word2[i]) - 'a']++;
//         }
//     }

//     for(int i = 0; i < 26; i++){
//         if(wordCount1[i] >= 1){
//             check++;
//         }
//         if(wordCount2[i] >= 1){
//             check++;
//         }
//     }

//     for(int i = 0; i < 26; i++){
//         if(wordCount1[i] != wordCount2[i]){
//             count = count + wordCount1[i] + wordCount2[i] - 1;
//         }
//     }

//     if(check == count){
//         return -1;
//     }
//     else{
//         return count;
//     }

// }

// int main (){

//     int t;
//     char word1[260], word2[260];

//     scanf("%d", &t);
//     for(int i = 1; i <= t; i++){
//         scanf("%s", word1);
//         scanf("%s", word2);
//         printf("Test %d: ", i);
//         if(checkAnagram(word1, word2) == -1){
//             printf("Anagram not found!\n");
//         }
//         else{
//             printf("%d\n", checkAnagram(word1, word2));
//         }
//     }

//     return 0;
// }

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char a[1001], b[1001], c[1001];
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++){
		scanf("%s", a); getchar();
		scanf("%s", b); getchar();
		int lena = strlen(a);
		int lenb = strlen(b);
		int x=0, y=0;
			for(int j=0; j < lena;j++){
				for(int k=0; k<lenb;k++){
					if(tolower(a[j]) == tolower(b[k])){
						a[j] = ' ';
						b[k] = ' ';
						x++;
					}
					else continue;
				}
			}
			
		strcpy(c, strcat(a,b));
		int leng = strlen(c);
		for(int j=0; j<leng; j++){
			if(c[j] != ' '){
				y++;
			}
		}
		
		if(x != 0){
			printf("Test %d: %d\n", i, y);
		}
		else {
			printf("Test %d: Anagram not found!\n", i);
		}
	}
	
	
	return 0;
}
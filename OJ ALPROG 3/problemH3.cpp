#include <stdio.h>

int main()
{
    char a, b, c;
// 123, 132, 213, 231, 312, 321
    scanf("%c %c %c", &a, &b, &c);

    if(a < b && b < c){
        printf("1 2 3\n");
    }
    else if(a < b && b > c && c > a){
        printf("1 3 2\n");
    } // 1 3 2 --> A C B
    else if(a > b && b < c && c > a){
        printf("2 1 3\n");
    }// 2 1 3 --> B A C
    else if(a > b && b < c && c < a){
        printf("2 3 1\n");
    }// 2 3 1 --> c a b
    else if(a < b && b > a && c < a){
        printf("3 1 2\n");
    }// 3 1 2 --> b c a
    else if(a > b && b > c){
        printf("3 2 1\n");
    }//3 2 1 --> c b a

    return 0;
}
#include <stdio.h>

int main()
{
    long int a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);

    //daging sayur telur

    if(a < b && b < c){
        printf("Telur\nSayur\nDaging\n");
    }
    else if(a < b && b > c && c > a){
        printf("Sayur\nTelur\nDaging\n");
    } // 1 3 2 --> A C B
    else if(a > b && b < c && c > a){
        printf("Telur\nDaging\nSayur\n");
    }// 2 1 3 --> B A C
    else if(a > b && b < c && c < a){
        printf("Daging\nTelur\nSayur\n");
    }// 2 3 1 --> c a b
    else if(a < b && b > a && c < a){
        printf("Sayur\nDaging\nTelur\n");
    }// 3 1 2 --> b c a
    else if(a > b && b > c){
        printf("Daging\nSayur\nTelur\n");
    }//3 2 1 --> c b a

    return 0;
}
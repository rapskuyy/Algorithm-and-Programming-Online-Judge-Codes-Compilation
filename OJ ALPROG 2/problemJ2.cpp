#include <stdio.h>

int main(){
    double a, b;
    
    scanf("%lf %lf", &a, &b);
    printf("%.4lf%%\n", b / a * 100);

    return 0;
}
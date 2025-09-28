#include <stdio.h>

int main(){

    long long int t;
    int r, h;
    double ans;

    scanf("%lld", &t);
    for(long long int i = 1; i <= t; i++){
        scanf("%d %d", &r, &h);
        ans = 2.0 * 3.14 * double(r) * double(h) + 2.0 * 3.14 * double(r) * double(r);
        printf("Case #%lld: %.2lf\n", i, ans);
    }


    return 0;
}
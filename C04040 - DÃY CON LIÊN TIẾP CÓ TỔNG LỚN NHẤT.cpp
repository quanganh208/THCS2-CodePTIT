#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        long long n, max, sum = 0, a[100005] = {0};
        scanf("%lld", &n);
        for (int i = 0; i < n; i++){
            scanf("%lld", &a[i]);
            sum = (a[i] > sum + a[i]) ? a[i] : sum + a[i];
            max = (i == 0) ? sum : ((sum > max) ? sum : max);
        }
        printf("%lld\n", max);
    }
    return 0;
}
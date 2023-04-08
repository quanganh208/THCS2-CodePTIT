#include <stdio.h>

int main(){
    int money[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int t;
    scanf("%d", &t);
    while (t--){
        int n, cnt = 0, i = 0;
        scanf("%d", &n);
        while (n){
            cnt += n / money[i];
            n %= money[i++];
        }
        printf("%d\n", cnt);
    }
    return 0;
}
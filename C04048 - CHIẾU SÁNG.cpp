#include <stdio.h>

int main(){
    int n, m, k, a[1000] = {0}, ans = 0, x = 0;
    scanf("%d\n%d\n%d", &n, &m, &k);
    for (int i = 0; i < m; i++){
        scanf("%d", &x);
        int left = (x - k < 1) ? 1 : x - k;
        int right = (x + k > n) ? n : x + k;
        for (int j = left; j <= right; j++) a[j] = 1;
    }
    int index = 1, answer = 0;
    while (index <= n){
        if (!a[index]){
            answer++;
            index += 2*k;
        }
        index++;
    }
    printf("%d", answer);
    return 0;
}
#include <stdio.h>

int main(){
    int a[1001], b[1001], ans[1001] = {0};
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        ans[a[i]] = 1;
    }
    for (int i = 0; i < m; i++){
        scanf("%d", &b[i]);
        if (ans[b[i]] == 1) ans[b[i]] = 2;
        else if (ans[b[i]] != 2) ans[b[i]] = 3;
    }
    for (int i = 0; i <= 1000; i++)
        if (ans[i] == 2) printf("%d ", i);
    printf("\n");
    for (int i = 0; i <= 1000; i++)
        if (ans[i] == 1) printf("%d ", i);
    printf("\n");
    for (int i = 0; i <= 1000; i++)
        if (ans[i] == 3) printf("%d ", i);
    printf("\n");
    return 0;
}
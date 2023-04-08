#include <stdio.h>
#include <string.h>
void Xoay(char a[]){
    int n = strlen(a);
    char c[n];
    strcpy(c, a);
    for (int i = 1; i < n; i++)
        a[i - 1] = c[i];
    a[n - 1] = c[0];
}
int main(){
    int n, ok = 1, ans = 1e9;
    scanf("%d", &n);
    char a[n][55], s[55], x[55];
    for (int i = 0; i < n; i++) scanf("%s", a[i]);
    strcpy(s, a[0]);
    int m = strlen(s);
    for (int i = 0; i < m; i++){
        int cnt = 0;
        for (int j = 0; j < n; j++){
            int k;
            strcpy(x, a[j]);
            for (k = 0; k < m; k++){
                if (strcmp(x, s) == 0){
                    cnt += k;
                    break;
                }
                Xoay(x);
            }
            if (k == m){
                ok = 0;
                break;
            }
        }
        if (ans > cnt) ans = cnt;
        Xoay(s);
    }
    if (!ok) printf("-1");
    else printf("%d", ans);
}
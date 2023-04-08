#include <stdio.h>
char a[1000][1000];
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n, m;
        scanf("%d %d", &n, &m);
        int h1[1000] = {0}, c1[1000] = {0}, h2[1000] = {0}, c2[1000] = {0};
        for (int i = 0; i < n; i++){
            scanf("\n");
            for (int j = 0; j < m; j++){
                scanf("%c", &a[i][j]);
                if (a[i][j] == '1'){
                    h1[i]++;
                    c1[j]++;
                }
                else if (a[i][j] == '2'){
                    h2[i]++;
                    c2[j]++;
                }
            }
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (a[i][j] == '1') ans += h2[i] * c2[j];
                else if (a[i][j] == '2') ans += h1[i] * c1[j];

        printf("%lld\n", ans);
    }
    return 0;
}
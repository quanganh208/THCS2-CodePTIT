#include <stdio.h>
int a[11][11];
void Swap(int n, int m){
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            a[i][j] = 1 - a[i][j];
}
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("\n");
        for (int j = 0; j < n; j++){
            char c;
            scanf("%c", &c);
            a[i][j] = c - '0';
        }
    }
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
        for (int j = n - 1; j >= 0; j--)
            if (a[i][j]){
                Swap(i, j);
                cnt++;
            }
    printf("%d", cnt);
    return 0;
}
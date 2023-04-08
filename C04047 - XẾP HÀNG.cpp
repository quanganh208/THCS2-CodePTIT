#include <stdio.h>

void Swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Sort(int a[101],int b[101], int n){
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]){
                Swap(&a[i], &a[j]);
                Swap(&b[i], &b[j]);
            }
}
int main(){
    int n, a[101] = {0}, b[101] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d %d", &a[i], &b[i]);
    Sort(a, b, n);
    long long ans = a[0];
    for (int i = 0; i < n; i++){
        ans += b[i];
        if (ans < a[i + 1]) ans = a[i + 1];
    }
    printf("%lld", ans);
    return 0;
}
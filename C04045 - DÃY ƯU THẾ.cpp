#include <stdio.h>
int check(int a[1000], int n){
    int ce = 0, co = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0) ce++; else co++;
    if (ce > co) return 1; else if (ce < co) return 0;
}
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n = 0, a[1000] = {0};
        while(scanf("%d", &a[n++])){
            char c = getchar();
            if (c == '\n') break;
        }
        if ((check(a, n) && n % 2 == 0) || (check(a, n) == 0 && n % 2 == 1))
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
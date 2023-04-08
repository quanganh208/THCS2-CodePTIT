#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n, a[100000];
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        int flag = 0;
        for (int i = 0; i < n - 1; i++){
            if (flag) break;
            for (int j = i + 1; j < n; j++)
                if (a[i] == a[j]){
                    printf("%d\n", a[i]);
                    flag = 1;
                    break;
                }

        }
        if (!flag) printf("NO\n");
    }
    return 0;
}
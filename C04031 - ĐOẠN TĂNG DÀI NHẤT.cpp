#include <stdio.h>

int main(){
    int t, c = 1;
    scanf("%d", &t);
    while(t--){
        printf("Test %d:\n", c++);
        int n, max = 0, a[101] = {0}, b[101] = {0};
        b[0] = 1;
        scanf("%d", &n);
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            b[i] = (a[i] > a[i - 1]) ? b[i - 1] + 1 : 1;
            max = (max < b[i]) ? b[i] : max;
        }
        printf("%d\n", max);
        for (int i = 0; i < n; i++)
            if (b[i] == max){
                for (int j = i - max + 1; j <= i; j++) printf("%d ", a[j]);
                printf("\n");
            }
    }
    return 0;
}
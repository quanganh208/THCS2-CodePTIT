#include <stdio.h>
#include <string.h>
struct Pokemon{
    char name[1000];
    int num;
};
int main(){
    int n;
    struct Pokemon a[1000];
    int k, m;
    int max = 0, total = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s", &a[i].name);
        scanf("%d %d", &k, &m);
        int cnt = 0;
        while (m / k){
            int tmp = m / k;
            cnt += tmp;
            m -= tmp * k;
            m += 2 * tmp;
        }
        a[i].num = cnt;
        max = (max < cnt) ? cnt : max;
        total += cnt;
    }
    printf("%d\n", total);
    for (int i = 0; i < n; i++)
        if (a[i].num == max){
            printf("%s", a[i].name);
            break;
        }
    return 0;
}
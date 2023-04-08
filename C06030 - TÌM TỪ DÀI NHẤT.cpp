#include <stdio.h>
#include <string.h>
int main(){
    char a[1000][1000];
    int n = 0;
    int max = 0;
    while (scanf("%s", a[n]) != -1){
        max = (max < strlen(a[n])) ? strlen(a[n]) : max;
        n++;
    }
    
    for (int i = 0; i < n; i++)
        if (strlen(a[i]) == max){
            int cnt = 1;
            for (int j = i + 1; j < n; j++)
                if (!strcmp(a[i], a[j])){
                    cnt++;
                    a[j][0] = '\0';
                }
        printf("%s %d %d\n", a[i], max, cnt);
        }
    return 0;
}
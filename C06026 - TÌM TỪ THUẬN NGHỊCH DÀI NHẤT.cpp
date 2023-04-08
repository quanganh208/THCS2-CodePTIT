#include <stdio.h>
#include <string.h>
int check(char s[100]){
    for (int i = 0; i < strlen(s) / 2; i++)
        if (s[i] != s[strlen(s) - i - 1]) return 0;
    return 1;
}
int main(){
    char s[100], a[10000][100];
    int max = 0, n = 0;
    while (scanf("%s", s) != -1){
        if (check(s)){
            max = (strlen(s) > max) ? strlen(s) : max;
            strcpy(a[n++], s);
        }
    }
    for (int i = 0; i < n; i++){
        if (strlen(a[i]) == max){
            int cnt = 1;
            for (int j = i + 1; j < n; j++)
                if (strcmp(a[i], a[j]) == 0){
                    cnt++;
                    a[j][0] = '\0';
                }
            printf("%s %d\n", a[i], cnt);
        }
    }
    return 0;
}
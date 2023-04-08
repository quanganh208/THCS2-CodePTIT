#include <stdio.h>
#include <string.h>
void Solve(int n, char s1[1000], char s2[1000], char s[1000]){
    char t[1000] = "\0";
    strcat(t, s1);
    strcat(t, s2);
    int cnt = 0;
    while (1){
        cnt++;
        char tmp[1000] = "\0";
        for (int i = 0; i < n; i++){
            tmp[2*i] = s2[i];
            tmp[2*i + 1] = s1[i];
        }
        if (!strcmp(tmp, s)){
            printf("%d\n", cnt);
            break;
        }
        if (!strcmp(tmp, t)){
            printf("-1\n");
            break;
        }
        strncpy(s1, tmp, n);
        strncpy(s2, tmp + n, n);
    }
}
int main(){
    while (1){
        int n;
        scanf("%d", &n);
        if (!n) break;
        char s1[1000];
        char s2[1000];
        char s[1000];
        scanf("%s", s1);
        scanf("%s", s2);
        scanf("%s", s);
        Solve(n,s1, s2, s);
    }
    
}
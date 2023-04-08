#include <stdio.h>
#include <string.h>

int check(char s[100]){
    int cnt = 0;
    for (int i = 0; i < strlen(s) / 2; i++)
        if (s[i] != s[strlen(s) - i - 1]) cnt++;
    if (cnt > 1) return 0;
    else if (!cnt && !(strlen(s) % 2)) return 0;
    else return 1;
}
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        char s[100];
        scanf("%s", s);
        if (check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
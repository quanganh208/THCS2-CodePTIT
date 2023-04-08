#include <stdio.h>
#include <string.h>

int Check(char s[100], int a[100]){
    int b[100], c = 0, sum = 0;
    for (int i = 2; i <= strlen(s); i++){
        int d[15] = {0};
        for (int j = strlen(s) - 1; j >= 0; j--){
            sum = (s[j] - '0') * i + c;
            b[j] = sum % 10;
            d[b[j]]++;
            c = sum / 10;
        }
        if (c > 0) d[c]++;
        for (int j = 0; j <= 9; j++)
            if (a[j] != d[j]) return 0;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int a[15] = {0};
        char s[100] ="";
        scanf("%s", s);
        for (int i = 0; i < strlen(s); i++) a[s[i] - '0']++;
        if (Check(s, a)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
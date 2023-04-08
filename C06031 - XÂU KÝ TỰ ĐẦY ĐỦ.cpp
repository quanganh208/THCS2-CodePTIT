#include <stdio.h>
#include <string.h>

int main(){
    char s[10000];
    scanf("%s", s);
    int dp[10000];
    int max = 0;
    dp[0] = 1;
    for (int i = 1; i < strlen(s); i++){
        dp[i] = 1; 
        for (int j = 0; j < i; j++)
            if (s[i] > s[j]) dp[i] = (dp[i] > dp[j] + 1) ? dp[i] : dp[j] + 1;
        max = (max > dp[i]) ? max : dp[i];
    }
    printf("%d", 26 - max);
    return 0;
}
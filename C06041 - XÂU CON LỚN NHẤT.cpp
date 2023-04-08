#include <stdio.h>
#include <string.h>
int main(){
    char s[100005], ans[100005];
    scanf("%s", s);
    int n = 0;
    char c = 'a';
    for (int i = strlen(s) - 1; i >= 0; i--){
        if (s[i] >= c){
            c = s[i];
            ans[n++] = c;
        }
    }
    for (int i = n - 1; i >= 0; i--) printf("%c", ans[i]);
}
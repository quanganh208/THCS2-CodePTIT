#include <stdio.h>
#include <string.h>

int check(char s[101]){
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == '0' || s[i] == '1' || s[i] == '2') continue;
        else return 0;
    return 1;
}
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        char s[101];
        scanf("%s", s);
        if(check(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        char s[100];
        scanf("%s", s);
        int a[100] = {0};
        for (int i = 0; i < strlen(s); i++)
            if (s[i] == 'I') a[i] = 1;
            else if (s[i] == 'V') a[i] = 5;
            else if (s[i] == 'X') a[i] = 10;
            else if (s[i] == 'L') a[i] = 50;
            else if (s[i] == 'C') a[i] = 100;
            else if (s[i] == 'D') a[i] = 500;
            else if (s[i] == 'M') a[i] = 1000;
        int ans = a[strlen(s) - 1];
        for (int i = strlen(s) - 1; i > 0; i--)
            if (a[i] > a[i - 1])  ans -= a[i - 1];
            else ans+= a[i - 1];
        printf("%d\n",  ans);
    }
    
    return 0;
}
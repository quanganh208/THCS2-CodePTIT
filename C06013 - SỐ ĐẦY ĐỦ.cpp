#include <stdio.h>
#include <string.h>
int check(char s[1000]){
	int a[10] = {0};
	if (s[0] == '0') return 2;
	for (int i = 0; i < strlen(s); i++)
		if ('0' <= s[i] && s[i] <= '9') a[s[i] - '0']++;
		else return 2;
	for (int i = 0; i < 10; i++)
		if (a[i] == 0) return 0;
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		char s[1000] = "";
		scanf("\n");
		gets(s);
		if (check(s) == 2) printf("INVALID\n");
		else if (check(s) == 1) printf("YES\n");
		else printf("NO\n");	
	}
	
	return 0;
}
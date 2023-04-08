#include <stdio.h>
#include <string.h>
int check1(char s[20]){
	if (s[6] + 1 == s[7] && s[7] + 1 == s[8] && s[8] + 1 == s[10] && s[10] + 1 == s[11]) return 1;
	else return 0;
}
int check2(char s[20]){
	if (s[6] == s[7] && s[7] == s[8] && s[8] == s[10] && s[10] == s[11]) return 1;
	else return 0;
}
int check3(char s[20]){
	if (s[6] == s[7] && s[7] == s[8] && s[10] == s[11]) return 1;
	else return 0;
}
int check4(char s[20]){
	if ((s[6] == '6' || s[6] == '8') && (s[7] == '6' || s[7] == '8') && (s[8] == '6' || s[8] == '8') && (s[10] == '6' || s[10] == '8') && (s[11] == '6' || s[11] == '8')) return 1;
	else return 0;
}

void solve(char s[20]){
	if (check1(s) || check2(s) || check3(s) || check4(s)) printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		scanf("\n");
		char s[20] = "";
		gets(s);
		solve(s);
	}
	return 0;
}
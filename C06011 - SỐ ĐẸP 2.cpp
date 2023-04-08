#include <stdio.h>
#include <string.h>
int check1(char s[1000]){
	int sum = 0;
	for (int i = 0; i < strlen(s); i++){
		int t = s[i] - '0';
		sum += t;
	}
	if (sum % 10 == 0) return 1; else return 0;
}

int check2(char s[1000]){
	for (int i = 0; i < strlen(s) / 2; i++){
		if (s[i] != s[strlen(s) - i - 1]) return 0;
	return 1; 
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		char s[1000];
		scanf("%s", s);
		if (s[strlen(s) - 1] == '8' && check1(s) && check2(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
} 

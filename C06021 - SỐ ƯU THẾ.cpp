#include <stdio.h>
#include <string.h>
int check(char s[1000]){
	int cnt_e = 0, cnt_o = 0;
	if (s[0] == '0') return 2;
	for (int i = 0; i < strlen(s); i++)
		if ('0' <= s[i] && s[i] <= '9')
			if ((s[i] - '0') % 2 == 0) cnt_e++; else cnt_o++;
		else return 2;
	if (cnt_e > cnt_o) return 1; else return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		char s[1000];
		scanf("%s", s);
		if (check(s) == 0) printf("NO\n");
		else if (check(s) == 1) printf("YES\n");
		else printf("INVALID\n");
	}
	
	return 0;
}
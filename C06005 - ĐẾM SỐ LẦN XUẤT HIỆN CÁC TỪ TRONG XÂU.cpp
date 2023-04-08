#include <stdio.h>
#include <string.h>
void lowercase(char s[1000]){
	for (int i = 0; i < strlen(s); i++)
		if ('A' <= s[i] && s[i] <= 'Z') s[i] += 'a' - 'A';
}
int main(){
	char s[1000];
	char ans[1000][1000];
	gets(s);
	lowercase(s);
	char x[] =" ";
	char *token;
	
	token = strtok(s, x);
	int n = 0;
	while (token != NULL){
		strcpy(ans[n++], token);
		token = strtok(NULL, x);
	}
	for (int i = 0; i < n; i++){
		if (ans[i][0]){
			int res = 1;
			for (int j = i + 1; j < n; j++)
				if (strcmp(ans[i], ans[j]) == 0){
					ans[j][0] = 0;
					res++;
				}
			printf("%s %d\n", ans[i], res);
		}
	}
	return 0;
}
#include <stdio.h>
#include <string.h>

void solve(char s[1000]){
	char ans[100][100];
	int n = 0;
	char x[] = " ";
	char *token;
	token = strtok(s, x);
	while (token != NULL){
		strcpy(ans[n++], token);
		token = strtok(NULL, x);
	}
	for (int i = 1; i < n; i++){
		if ('a' <= ans[i][0] && ans[i][0] <= 'z') ans[i][0] -= 'a' - 'A';
		for (int j = 1; j < strlen(ans[i]); j++)
			if ('A' <= ans[i][j] && ans[i][j] <= 'Z') ans[i][j] += 'a' - 'A';
		printf("%s", ans[i]);
		if (i < n - 1) printf(" ");
	}
	for (int j = 0; j < strlen(ans[0]); j++)
		if ('a' <= ans[0][j] && ans[0][j] <= 'z') ans[0][j] -= 'a' - 'A';
	printf(", %s\n", ans[0]);
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		scanf("\n");
		char s[1000];
		gets(s);
		solve(s);
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
void lowercase(char s[1000]){
	for (int i = 0; i < strlen(s); i++)
		if ('A' <= s[i] && s[i] <= 'Z') s[i] += 'a' - 'A';
}
int main(){
	int t;
	scanf("%d", &t);
	for (int test = 1; test <= t; test++){
		scanf("\n");
		printf("Test %d: ", test);
		char s1[100], s2[100], a[1000][1000], b[1000][1000];
		gets(s1);
		scanf("\n");
		gets(s2);
		int n = 0;
		char *token = strtok(s1, " ");
		while (token != NULL){
			strcpy(b[n], token);
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		for (int i = 0; i < n; i++) lowercase(a[i]);
		lowercase(s2);
		for (int i = 0; i < n; i++)
			if (strcmp(s2, a[i]) == 0) strcpy(b[i], "");
		for (int i = 0; i < n; i++)
			if (strcmp(b[i], "") != 0) printf("%s ", b[i]);
		printf("\n");
	}
	return 0;
}
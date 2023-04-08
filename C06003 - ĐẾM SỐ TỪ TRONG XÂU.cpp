#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[1000];
		gets(s);
		char x[] = " ";
		char *token;
		int cnt = 0;
		token = strtok(s, x);
		while (token != NULL){
			cnt++;
			token = strtok(NULL, x);
		}
		printf("%d\n", cnt);
	}
	return 0;
}

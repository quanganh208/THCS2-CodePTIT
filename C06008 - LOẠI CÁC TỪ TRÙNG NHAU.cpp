#include <stdio.h>
#include <string.h>

int main(){
	char s[1000], n[1000][1000];
	gets(s);
	char x[] = " ";
	char *token;
	int cnt = 0;
	token = strtok(s, x);
	while (token != NULL){
		strcpy(n[cnt++], token);
		token = strtok(NULL, x);
	}
	for (int i = 0; i < cnt; i++){
		for (int j = i + 1; j < cnt; j++)
			if (strcmp(n[i], n[j]) == 0) n[j][0] = -1;
		if (n[i][0] != -1) printf("%s ", n[i]);
	}
}

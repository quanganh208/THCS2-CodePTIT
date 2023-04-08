#include <stdio.h>
#include <string.h>

int main(){
	char s[1000], a[1000][1000];
	int index = 0;
	gets(s);
	char *token = strtok(s, " ");
	while (token != NULL){
		strcpy(a[index++], token);
		token = strtok(NULL, " ");
	}
	for (int i = 0; i < index - 1; i++){
		if ('A' <= a[i][0] && a[i][0] <= 'Z') a[i][0] += 'a' - 'A';
		printf("%c", a[i][0]);
	}
	for (int i = 0; i < strlen(a[index - 1]); i++)
		if ('A' <= a[index - 1][i] && a[index - 1][i] <= 'Z') a[index - 1][i] += 'a' - 'A';
	printf("%s@ptit.edu.vn", a[index - 1]);
	return 0;
}
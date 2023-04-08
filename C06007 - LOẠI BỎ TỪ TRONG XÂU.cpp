#include <stdio.h>
#include <string.h>

int main(){
	char s[1000], n[1000];
	gets(s);
	gets(n);
	char x[] = " ";
	char *token;
	
	token = strtok(s, x);
	while (token != NULL){
		if (strcmp(token, n) != 0) printf("%s ", token);
		token = strtok(NULL, x);
	}
	
}

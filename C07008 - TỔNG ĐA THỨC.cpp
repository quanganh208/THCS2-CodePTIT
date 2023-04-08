#include <stdio.h>
#include <string.h>
void Process(char s[1000], int a[10005]){
	int base = 0, exp = 0;
	int flag = 0;
	for (int i = 0; i < strlen(s); i++){
		if ('0' <= s[i] && s[i] <= '9' && !flag)
			base = base * 10 + s[i] - '0';
		else if ('0' <= s[i] && s[i] <= '9' && flag)
			exp = exp * 10 + s[i] - '0';
		else flag = 1;
	}
	a[exp] += base;
}
void Solve(char s[100000], int a[10005]){
	int index = 0;
	char *token = strtok(s, " + ");
	while (token != NULL){
		Process(token, a);
    	token = strtok(NULL, " + ");
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a[10005] = {0};
		scanf("\n");
		char x[1000], y[1000];
		gets(x);
		Solve(x, a);
		gets(y);
		Solve(y, a);
		int flag = 0;
		for (int i = 10000; i >= 0; i--)
			if (a[i]){
				if (flag) printf(" + ");
				printf("%d*x^%d", a[i], i);
				flag = 1;
			}
	printf("\n");
	}
	return 0;
}

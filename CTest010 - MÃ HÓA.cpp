#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		char s[101];
		char a[101] = {0};
		scanf("%s", s);
		for (int i = 0; i < strlen(s); i++) a[s[i]]++;
		for (int i = 0; i < strlen(s); i++)
			if (a[s[i]]){
				printf("%c%d", s[i], a[s[i]]);
				a[s[i]] = 0;
			}
		printf("\n");
		
	}
	return 0;
}

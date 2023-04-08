#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		int c = i;
		int d = n - 1;
		for (int j = 1; j <= i; j++){
			printf("%c ", 64 + c);
			c += d--;
		}
		printf("\n");
	}
	return 0;
}


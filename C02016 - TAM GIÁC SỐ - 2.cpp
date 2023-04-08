#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		int c;
		if (i % 2 == 0) c = 2; else c = 1;
		for (int j = 1; j <= i; j++){
			printf("%d", c);
			c += 2;
		}
		printf("\n");
	}
	return 0;
}

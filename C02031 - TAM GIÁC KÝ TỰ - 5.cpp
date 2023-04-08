#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int c = 63 + n;
	for (int i = 0; i < n; i++){
		for (int j = i; j < n; j++) printf("%c", c + j);
		c -= 2;
		printf("\n");
	}
	return 0;
}

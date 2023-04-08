#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if (a - i + j - 1 >= b) printf("%c", 64 + b);
			else printf("%c", 64 + a - i + j);
		}
		printf("\n");
	}
	return 0;
}

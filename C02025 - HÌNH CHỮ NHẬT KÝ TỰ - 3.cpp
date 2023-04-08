#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if (i + j < b) printf("%c", 64 + i + j);
			else printf("%c", 63 + b);
		}
		printf("\n");
	}
	return 0;
}

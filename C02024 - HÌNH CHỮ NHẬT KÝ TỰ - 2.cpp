#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b - i; j++) printf("%c", 65 + j + i);
		if (i > b){
			for (int j = b ; j > 0; j--) printf("%c", 64 + j);
			printf("\n");
			continue;
		}
		for (int j = i ; j > 0; j--) printf("%c", 64 + j); 
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++){
		int c = i + 1;
		int d = 1;
		for (int j = 0; j < b; j++){
			if (c >= b) d = 0;
			if (d) printf("%d", c++);
			else printf("%d", c--);
			
		}
		printf("\n");
	}
	return 0;
}

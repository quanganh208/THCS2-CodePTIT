#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int max = (a < b) ? b : a;
	for (int i = a ; i > 0; i--){
		int c = max--;
		int d = 0;
		for (int j = 0; j < b; j++){
			if (c <= 1) d = 1;
			if (d) printf("%d", c++);
			else printf("%d", c--);
			
		}
		printf("\n");
	}
	return 0;
}
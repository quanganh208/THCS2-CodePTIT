#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = n - i - 1; j > 0; j--) printf("~");
		int c = 2;
		for (int j = 1; j <= 2*i + 1; j++){
			printf("%d", c);
			if (j <= (2*i + 1) / 2) c += 2;
			else c -= 2;
		}
		printf("\n");
	}
	return 0;
}

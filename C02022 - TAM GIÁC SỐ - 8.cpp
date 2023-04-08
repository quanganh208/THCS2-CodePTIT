#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int c = 1;
	for (int i = 1; i <= n; i++){
		if (i % 2 == 1)
			for (int j = 1; j <= i; j++) printf("%d ", c++);
		else{
			c += i - 1;
			for (int j = 1; j <= i; j++) printf("%d ", c--);
			c+= i + 1;
		}
		printf("\n");
	}
	return 0;
}

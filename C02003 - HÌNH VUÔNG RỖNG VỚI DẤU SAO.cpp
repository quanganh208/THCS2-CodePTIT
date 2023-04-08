#include <stdio.h>
#include <math.h>
//IT PTIT Club

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		if (i == 1 || i == n) for (int i = 1; i <= n; i++) printf("*");
		else{
			printf("*");
			for (int i = 1; i <= n - 2; i++) printf(".");
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


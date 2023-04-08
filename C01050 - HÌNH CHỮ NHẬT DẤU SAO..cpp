#include <stdio.h>
#include <math.h>
//IT PTIT Club

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = 1; i <= n; i++){
		if (i == 1 || i == n)
			for (int j = 1; j <= m; j++) printf("*");
		else{
			printf("*");
			for (int k = 1; k <= m - 2; k++) printf(" ");
			printf("*");
		}
		printf("\n"); 
	}
	return 0;
}

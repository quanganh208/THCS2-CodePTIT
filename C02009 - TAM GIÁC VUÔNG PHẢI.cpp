#include <stdio.h>
#include <math.h>
//IT PTIT Club

int main(){
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n - i; j++) printf("~");
		for (int j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
	return 0;
}


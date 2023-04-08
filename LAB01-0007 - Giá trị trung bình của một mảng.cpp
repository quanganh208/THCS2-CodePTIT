#include <stdio.h>

int main(){
	int n, a;
	scanf("%d", &n);
	float sum = 0;
	for (int i = 1; i <= n; i++){
		scanf("%d", &a);
		sum += a;
	}
	printf("%.3f", sum / n);
	return 0;
}

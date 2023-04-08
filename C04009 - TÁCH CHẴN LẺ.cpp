#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	int n, a[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0) printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 1) printf("%d ", a[i]);
	return 0;
}


#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
int main() {
	int n, a[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] < a[j]) swap(&a[i], &a[j]);
	for (int i = 0; i < n; i++) printf("%d ", a[i]);
	return 0;
}



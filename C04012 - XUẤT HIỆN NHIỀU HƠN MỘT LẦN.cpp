#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int b[10000000] = {0};
int main() {
	int n, a[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	for (int i = 0; i < n; i++)
		if (b[a[i]] > 1){
			printf("%d ", a[i]);
			b[a[i]] = 0;
		}
	return 0;
}


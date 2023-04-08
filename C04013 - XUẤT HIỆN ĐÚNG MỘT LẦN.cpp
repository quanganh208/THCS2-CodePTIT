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
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (b[a[i]] == 1) cnt++;
	printf("%d\n", cnt);
	for (int i = 0; i < n; i++)
		if (b[a[i]] == 1) printf("%d ", a[i]);
	return 0;
}


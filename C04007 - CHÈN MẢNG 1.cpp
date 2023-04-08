#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	int n, m, a[10000], b[10000];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < m; i++) scanf("%d", &b[i]);
	int vt;
	scanf("%d", &vt);
	for (int i = 0; i < n; i++){
		if (i == vt)
			for (int j = 0; j < m; j++) printf("%d ", b[j]);
		printf("%d ", a[i]);
	}
	if (vt == n) for (int j = 0; j < m; j++) printf("%d ", b[j]);
	return 0;
}


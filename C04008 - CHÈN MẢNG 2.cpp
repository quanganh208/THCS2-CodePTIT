#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	int t;
	scanf("%d", &t);
	int c = 1;
	while (t--){
		int n, m, a[10000], b[10000], vt;
		scanf("%d %d %d", &n, &m, &vt);
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		for (int i = 0; i < m; i++) scanf("%d", &b[i]);
		printf("Test %d:\n", c++);
		for (int i = 0; i < n; i++){
			if (i == vt)
				for (int j = 0; j < m; j++) printf("%d ", b[j]);
			printf("%d ", a[i]);
		}
		if (vt == n) for (int j = 0; j < m; j++) printf("%d ", b[j]);
		printf("\n");
	}
	return 0;
}


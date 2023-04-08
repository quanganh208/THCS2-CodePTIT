#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	int t;
	scanf("%d", &t);
	while (t--){
		int n, a[101], b[101] = {0};
		scanf("%d", &n);
		int max = 0, cnt = 0;
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if (max < a[i]){
				cnt = 1;
				b[0] = i;
				max = a[i];
			}else if (max == a[i]) b[cnt++] = i;
		}
		printf("%d\n", max);
		for (int i = 0; i < cnt; i++) printf("%d ", b[i]);
		printf("\n");
	}
	return 0;
}


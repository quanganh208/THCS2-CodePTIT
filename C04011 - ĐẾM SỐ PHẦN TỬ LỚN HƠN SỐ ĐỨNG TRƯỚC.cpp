#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	int t;
	scanf("%d", &t);
	while (t--){
		int n, a[1000];
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		int cnt = 1;
		for (int i = 1; i < n; i++){
			int c = 1;
			for (int j = 0; j < i; j++)
				if (a[j] > a[i]){
					c = 0;
					break;
				}
			if (c) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}


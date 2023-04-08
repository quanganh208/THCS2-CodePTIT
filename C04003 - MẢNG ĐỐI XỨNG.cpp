#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main() {
	int t;
	scanf("%d", &t);
	while (t--){
		int n, a[101];
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		int c = 1;		
		for (int i = 0; i < n / 2; i++){
			if (a[i] != a[n - i - 1]){
				c = 0;
				break;
			}
		}
		if (c) printf("YES\n"); else printf("NO\n");
	}
	return 0;
}


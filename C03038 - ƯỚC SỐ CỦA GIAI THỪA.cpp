#include <stdio.h>

int main(){
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n, p, x = 0;
		scanf ("%d%d", &n, &p);
		for (int i = p; i <= n; i+= p) {
			int k = i;
			while ( k % p == 0) {
				x++;
				k /= p;
			}
		}
		printf("%d\n", x);
	}
	return 0;
}


#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int check(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--){
		int n, a[101];
		scanf("%d", &n);
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if (check(a[i])) printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}


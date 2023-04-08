#include <stdio.h>

int gcd(int a, int b){
	if (b == 0) return a;
	return gcd(b, a % b);
}

int lcm(int a, int b){
	return a * b / gcd(a, b);
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		int a[1001];
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		int ans[1002];
		ans[0] = a[0];
		ans[n] = a[n - 1];
		for (int i = 1; i < n; i++)
			ans[i] = lcm(a[i - 1], a[i]);
		for (int i = 0; i <= n; i++)
			printf("%d ", ans[i]);
		printf("\n");
	}
	
	return 0;
}